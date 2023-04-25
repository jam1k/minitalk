/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshestov <jshestov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 10:19:35 by jshestov          #+#    #+#             */
/*   Updated: 2023/01/02 11:09:14 by jshestov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	return_line(char **line, char **buffer_str)
{
	char	*new_buffer;
	int		i;

	new_buffer = *buffer_str;
	i = 0;
	while ((*buffer_str)[i] != '\n' && (*buffer_str)[i] != '\0')
		i++;
	if (ft_strchr(*buffer_str, '\n'))
	{
		*line = ft_substr(*buffer_str, 0, i + 1);
		*buffer_str = ft_strdup(*buffer_str + i + 1);
	}
	else
	{
		*line = ft_strdup(*buffer_str);
		*buffer_str = NULL;
	}
	free(new_buffer);
	new_buffer = NULL;
}

static int	read_file(int fd, char **buffer_str, char **buf, char **line)
{
	int		rd;
	char	*temp;

	rd = 1;
	while (ft_strchr(*buffer_str, '\n') == 0 && rd > 0)
	{
		rd = read(fd, *buf, BUFFER_SIZE);
		if (rd < 0)
			return (0);
		(*buf)[rd] = '\0';
		temp = *buffer_str;
		*buffer_str = ft_strjoin(*buffer_str, *buf);
		free(temp);
	}
	free(*buf);
	*buf = NULL;
	return_line(line, buffer_str);
	return (rd);
}

char	*get_next_line(int fd)
{
	static char	*buffer_str = NULL;
	char		*buf;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	buf = (char *) malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (0);
	if (read(fd, buf, 0) < 0)
	{
		free(buf);
		return (NULL);
	}
	if (!buffer_str)
		buffer_str = ft_strdup("");
	if (read_file(fd, &buffer_str, &buf, &line) == 0 && *line == '\0')
	{
		free(line);
		line = NULL;
	}
	return (line);
}
