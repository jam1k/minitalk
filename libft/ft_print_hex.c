/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 09:35:58 by jshestov          #+#    #+#             */
/*   Updated: 2023/01/02 11:08:14 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_hex_len(unsigned int hex_num)
{
	int		len;

	len = 0;
	while (hex_num != 0)
	{
		len++;
		hex_num = hex_num / 16;
	}
	return (len);
}

int	ft_print_x(int num)
{
	unsigned int	nbr;
	int				len;

	nbr = (unsigned int)num;
	len = ft_hex_len(nbr);
	if (nbr >= 16)
	{
		ft_print_x(nbr / 16);
		ft_print_x(nbr % 16);
	}
	else if (nbr < 10)
		ft_putchar_fd(nbr + 48, 1);
	else
		ft_putchar_fd(nbr + 87, 1);
	if (len == 0)
		len = 1;
	return (len);
}

int	ft_print_upper_x(int num)
{
	unsigned int	nbr;
	int				len;

	nbr = (unsigned int)num;
	len = ft_hex_len(nbr);
	if (nbr >= 16)
	{
		ft_print_upper_x(nbr / 16);
		ft_print_upper_x(nbr % 16);
	}
	else if (nbr < 10)
		ft_putchar_fd(nbr + 48, 1);
	else
		ft_putchar_fd(nbr + 55, 1);
	if (len == 0)
		len = 1;
	return (len);
}
