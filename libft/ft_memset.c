/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:12:36 by jshestov          #+#    #+#             */
/*   Updated: 2022/11/02 09:28:39 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			index;
	unsigned char	*string;

	string = (unsigned char *)str;
	index = 0;
	while (index < n)
	{
		string[index] = (unsigned char) c;
		index++;
	}
	return (str);
}
