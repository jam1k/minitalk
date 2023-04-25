/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 09:35:22 by jshestov          #+#    #+#             */
/*   Updated: 2023/01/02 11:08:44 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_d(int num)
{
	int	num_bytes;

	num_bytes = 0;
	num_bytes += ft_print_nbr(num);
	return (num_bytes);
}
