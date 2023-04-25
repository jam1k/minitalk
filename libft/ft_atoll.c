/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 12:38:32 by jshestov          #+#    #+#             */
/*   Updated: 2023/02/21 15:14:44 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long	ft_atoll(const char *str)
{
	int			i;
	int			f;
	long long	out;

	i = 0;
	f = 1;
	out = 0;
	while (ft_isspace(str[i]))
		++i;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			f = -1;
		++i;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		out = out * 10 + (str[i] - '0');
		++i;
	}
	return (f * out);
}
