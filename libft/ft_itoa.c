/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:26:55 by jshestov          #+#    #+#             */
/*   Updated: 2022/11/09 09:28:31 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	return_length_int(int n)
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

char	*ft_itoa(int nb)
{
	char	*res;
	int		i;
	long	n;

	n = nb;
	i = return_length_int(n);
	res = (char *)malloc(sizeof(char) * (return_length_int(n) + 1));
	if (!res)
		return (NULL);
	res[i] = '\0';
	i--;
	if (n == 0)
		res[0] = 48;
	else if (n < 0)
	{
		res[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		res[i] = 48 + (n % 10);
		n /= 10;
		i--;
	}
	return (res);
}
