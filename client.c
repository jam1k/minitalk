/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 11:27:59 by jshestov          #+#    #+#             */
/*   Updated: 2023/04/25 15:27:37 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

// static int g_receiver;

// void	sig_handler(int signum, siginfo_t *info, void *context)
// {
// 	static int	i;

// 	i = 0;
// 	g_receiver = 1;
// 	if (signum == SIGUSR2)
// 		i++;
// 	else if (signum == SIGUSR1)
// 		ft_printf ("%d\n", i);
// }

// int	char_to_bin(char c, int pid)
// {
// 	int	itr;
// 	int	bit_index;

// 	bit_index = 7;
// 	while (bit_index >= 0)
// 	{
// 		itr = 0;
// 		if ((c >> bit_index) & 1)
// 			kill(pid, SIGUSR1);
// 		else
// 			kill(pid, SIGUSR2);
// 		while (g_receiver == 0)
// 		{
// 			if (itr == 50)
// 			{
// 				ft_printf("No response from server\n");
// 				exit(EXIT_FAILURE);
// 			}
// 			itr++;
// 			usleep(100);
// 		}
// 		g_receiver = 0;
// 		bit_index--;
// 		bit_index--;
// 	}
// }

int	main(void)
{
	// struct sigaction sa;
	// //signal(30, SIG_DFL);
	// sa.sa_flags = SA_SIGINFO;
	// sa.sa_sigaction = sig_handler;
	// sigaction(SIGUSR1, &sa, NULL);
	// sigaction(SIGUSR2, &sa, NULL);

	return (0);
}
