/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyao-che <lyao-che@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 19:27:39 by lyao-che          #+#    #+#             */
/*   Updated: 2022/06/19 19:43:33 by lyao-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*get_next_line(int fd)
{
	static char	*records;
	char		*line;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (0);
	records = ft_read_and_save(fd, records);
	if (!save)
		return (NULL);
	line = ft_get_line(records);
	records  = ft_save(records);
	return (line);
}
