/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 15:20:34 by jshestov          #+#    #+#             */
/*   Updated: 2023/04/26 11:17:57 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minitalk.h"

void	ft_handler(int signal)
{
	static int	bit;
	static int	i;

	if (signal == SIGUSR1)
		i = i | (0x01 << bit);
	bit++;
	if (bit == 8)
	{
		ft_printf("%c", i);
		bit = 0;
		i = 0;
	}
}

int	main(int ac, char **av)
{
	av = NULL;
	if (ac != 1)
		ft_printf("Server doesn't take arguments!\n");
	else
	{
		ft_printf("Server PID = %d\n", getpid());
		while (1)
		{
			signal(SIGUSR1, ft_handler);
			signal(SIGUSR2, ft_handler);
			pause();
		}
	}
	return (0);
}
