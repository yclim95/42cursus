/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyao-che <lyao-che@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 19:27:39 by lyao-che          #+#    #+#             */
/*   Updated: 2022/07/19 09:42:39 by lyao-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

char	*ft_read_save(int fd, char *save)
{
	char	*lines;
	int		bytes;

	lines = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!lines)
		return (NULL);
	bytes = 1;
	while (bytes != 0 && !ft_strchr(save, '\n'))
	{
		bytes = read(fd, lines, BUFFER_SIZE);
		if (bytes == -1)
		{
			free(lines);
			return (NULL);
		}
		lines[bytes] = '\0';
		save = ft_strjoin(save, lines);
	}
	free(lines);
	return (save);
}

char	*ft_save(char *save)
{
	char	*lines;
	int		c1;
	int		c2;

	c1 = 0;
	while (save[c1] != '\n' && save[c1])
		c1++;
	if (!save[c1])
	{
		free(save);
		return (NULL);
	}
	lines = (char *)malloc(sizeof(char) * (ft_strlen(save) - c1 + 1));
	if (!lines)
		return (NULL);
	c2 = 0;
	while (save[++c1])
		lines[c2++] = save[c1];
	lines[c2] = '\0';
	free(save);
	return (lines);
}

char	*ft_getline(char *save)
{
	char	*lines;
	size_t	c;

	c = 0;
	if (!save[c])
		return (NULL);
	c = ft_strlen(save);
	lines = (char *)malloc(sizeof(char) * (c + 2));
	if (!lines)
		return (NULL);
	c = 0;
	while (save[c] != '\n' && save[c])
	{
		lines[c] = save[c];
		c++;
	}
	if (save[c] == '\n')
	{
		lines[c] = save[c];
		c++;
	}
	lines[c] = '\0';
	return (lines);
}

char	*get_next_line(int fd)
{
	static char	*records;
	char		*lines;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (0);
	records = ft_read_save(fd, records);
	if (!records)
		return (NULL);
	lines = ft_getline(records);
	records = ft_save(records);
	return (lines);
}
