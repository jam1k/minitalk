/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_num.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 09:37:39 by jshestov          #+#    #+#             */
/*   Updated: 2023/01/02 11:08:27 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_num_length(long long int n)
{
	int	count;

	count = 0;
	if (n == 0)
	{
		count = 1;
		return (count);
	}
	else if (n == -2147483648)
	{
		count = 11;
		return (count);
	}
	else if (n < 0)
	{
		count = 1;
		n = -n;
	}
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

int	ft_print_u(unsigned int unum)
{
	int	num_bytes;

	num_bytes = ft_num_length(unum);
	if (unum > 2147483647)
	{
		ft_putnbr_fd(unum / 1000000000, 1);
		unum = unum % 1000000000;
		ft_print_u(unum);
	}
	else if (unum <= 2147483647)
		ft_putnbr_fd(unum, 1);
	return (num_bytes);
}
