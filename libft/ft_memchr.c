/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:12:08 by jshestov          #+#    #+#             */
/*   Updated: 2022/11/09 09:28:45 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int ch, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		if (((unsigned char *) ptr)[i] == (unsigned char) ch)
			return (&((void *) ptr)[i]);
		i++;
	}
	return (0);
}
