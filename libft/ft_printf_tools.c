/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_tools.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 11:57:42 by jshestov          #+#    #+#             */
/*   Updated: 2023/01/02 11:08:31 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_c(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_print_s(char	*s)
{
	int	i;
	int	len;

	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	i = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		ft_print_c(s[i]);
		i++;
	}
	return (len);
}

int	ft_print_nbr(int nb)
{
	int	num_bytes;

	num_bytes = 0;
	if (nb == -2147483648)
	{
		num_bytes += ft_print_c('-');
		num_bytes += ft_print_c('2');
		nb = 2147483648 % 1000000000;
	}
	if (nb < 0)
	{
		num_bytes += ft_print_c('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		num_bytes += ft_print_nbr(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10)
	{
		num_bytes += ft_print_c(nb + 48);
	}
	return (num_bytes);
}
