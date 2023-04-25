/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:12:58 by jshestov          #+#    #+#             */
/*   Updated: 2022/11/09 12:03:21 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t			i;
	size_t			j;
	size_t			lendst;

	if (dstsize == 0)
		return (ft_strlen((char *)src));
	lendst = ft_strlen((char *)dst);
	i = lendst;
	j = 0;
	if (dstsize > lendst)
	{
		while (src[j] != '\0' && i < dstsize - 1)
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
		return (lendst + ft_strlen((char *)src));
	}
	else if (ft_strlen(dst) == 0)
		return (ft_strlen(src));
	return (ft_strlen(src) + dstsize);
}
