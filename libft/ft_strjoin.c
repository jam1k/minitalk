/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:32:11 by jshestov          #+#    #+#             */
/*   Updated: 2022/11/17 09:27:13 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	len1;
	size_t	i;

	if (!s1)
		return (NULL);
	len1 = ft_strlen(s1);
	result = (char *)malloc(sizeof(char) * (len1 + ft_strlen(s2) + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		result[len1 + i] = s2[i];
		i++;
	}
	result[len1 + i] = '\0';
	return (result);
}
