/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:54:50 by jshestov          #+#    #+#             */
/*   Updated: 2022/11/09 14:41:03 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		index;
	char	*string;

	string = (char *)s;
	index = ft_strlen(string);
	while (index >= 0)
	{
		if (string[index] == (unsigned char)c)
			return (&string[index]);
		index--;
	}
	return (0);
}
