/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:12:28 by jshestov          #+#    #+#             */
/*   Updated: 2022/11/02 09:43:57 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*cdest;
	char	*csrc;

	cdest = (char *)dest;
	csrc = (char *)src;
	if (!src && !dest)
		return (0);
	if (src == dest)
		return (dest);
	if (csrc < cdest)
	{
		while (n > 0)
		{
			cdest[n - 1] = csrc[n - 1];
			n--;
		}
	}
	else
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}
