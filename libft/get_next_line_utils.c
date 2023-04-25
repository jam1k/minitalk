/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 10:33:47 by jshestov          #+#    #+#             */
/*   Updated: 2023/01/02 11:09:08 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	count;

	if (!str)
		return (0);
	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		i;

	if (!s)
		return (0);
	str = (char *)s;
	i = 0;
	while (str[i] != (char)c)
	{
		if (str[i] == '\0')
			return (0);
		i++;
	}
	return (&str[i]);
}

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

char	*ft_strdup(const char *src)
{
	char	*copy;
	int		length;
	int		index;

	index = 0;
	length = ft_strlen(src);
	copy = (char *) malloc (sizeof (*src) * (length + 1));
	if (!copy)
		return (NULL);
	while (src[index] != '\0')
	{
		copy[index] = src[index];
		index++;
	}
	copy[index] = '\0';
	return (copy);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s))
		str = (char *)malloc(sizeof(char) * (ft_strlen(s) - start + 1));
	else
		str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}
