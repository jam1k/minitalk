/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 09:46:49 by jshestov          #+#    #+#             */
/*   Updated: 2022/11/10 09:24:42 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	return_start(char const *s1, char const *set)
{
	int		start;
	int		i;

	start = 0;
	i = 0;
	while (s1[i] != '\0')
	{
		if (ft_strrchr(set, s1[i]))
			start++;
		else
			break ;
		i++;
	}
	return (start);
}

static int	return_end(char const *s1, char const *set)
{
	int		j;
	int		end;

	j = ft_strlen(s1) - 1;
	end = j;
	while (j >= 0)
	{
		if (ft_strrchr(set, s1[j]))
			end -= 1;
		else
			break ;
		j--;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	char	*result;

	if (!s1)
		return (NULL);
	start = return_start(s1, set);
	end = return_end(s1, set);
	if (end < start)
		return (ft_strdup(""));
	result = (char *) malloc(sizeof(char) * (end - start + 1 + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (s1[i] != '\0' && i < end - start + 1)
	{
		result[i] = s1[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
