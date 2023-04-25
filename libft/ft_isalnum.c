/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 09:28:40 by jshestov          #+#    #+#             */
/*   Updated: 2022/10/26 14:13:21 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int argument)
{
	if (ft_isalpha(argument) == 1 || ft_isdigit(argument) == 1)
		return (1);
	else
		return (0);
}
