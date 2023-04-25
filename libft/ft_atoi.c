/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 11:50:43 by jshestov          #+#    #+#             */
/*   Updated: 2022/11/09 09:22:17 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	check_overflow(int sign)
{
	if (sign == 1)
		return (-1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	long long int	sum;
	int				sign;
	int				index;

	sum = 0;
	sign = 1;
	index = 0;
	while (str[index] == '\f' || str[index] == '\t' || str[index] == '\n'
		|| str[index] == '\r' || str[index] == '\v' || str[index] == ' ')
		index++;
	if (str[index] == '-')
		sign *= -1;
	if (str[index] == '-' || str[index] == '+')
		index++;
	while (str[index] >= '0' && str[index] <= '9')
	{
		sum = sum * 10 + str[index] - '0';
		if (sum < 0)
		{
			sum = check_overflow(sign);
			return ((int)sum);
		}
		index++;
	}
	return ((int)sum * sign);
}
