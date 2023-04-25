/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 09:38:41 by jshestov          #+#    #+#             */
/*   Updated: 2023/01/02 11:08:23 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_pointer_len(unsigned long int pointer)
{
	int		len;

	len = 0;
	while (pointer != 0)
	{
		len++;
		pointer = pointer / 16;
	}
	return (len);
}

void	ft_put_p(unsigned long int nbr)
{
	if (nbr >= 16)
	{
		ft_put_p(nbr / 16);
		ft_put_p(nbr % 16);
	}
	else if (nbr < 10)
		ft_putchar_fd((nbr + 48), 1);
	else
		ft_putchar_fd((nbr - 10 + 'a'), 1);
}

int	ft_print_p(void *p)
{
	unsigned long int	temp;
	int					len;

	temp = (unsigned long int)p;
	write(1, "0x", 2);
	ft_put_p(temp);
	len = ft_pointer_len(temp);
	if (len == 0)
		return (3);
	else
		return (2 + ft_pointer_len((unsigned long int)p));
}
