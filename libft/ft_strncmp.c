/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 19:47:21 by jshestov          #+#    #+#             */
/*   Updated: 2022/11/07 11:20:11 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;

	index = 0;
	if (n == 0)
		return (0);
	while (index < (n - 1) && s1[index] == s2[index]
		&& s1[index] != '\0' && s2[index] != '0')
		index ++;
	return ((unsigned char)s1[index] - (unsigned char)s2[index]);
}
