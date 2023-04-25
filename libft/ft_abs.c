/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:27:37 by jshestov          #+#    #+#             */
/*   Updated: 2023/02/13 14:29:23 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long int	ft_abs(long int num)
{
	if (num >= 0)
		return (num);
	else
		return (-num);
}
