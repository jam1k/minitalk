/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:12:03 by jshestov          #+#    #+#             */
/*   Updated: 2022/11/09 09:23:09 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	index;

	if (n == 0)
		return ;
	index = 0;
	while (index < n)
	{
		((unsigned char *)s)[index] = 0;
		index++;
	}
}
