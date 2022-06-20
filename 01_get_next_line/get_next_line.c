/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyao-che <lyao-che@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 19:27:39 by lyao-che          #+#    #+#             */
/*   Updated: 2022/06/21 07:36:39 by lyao-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_read_and_save(int fd, char *save)
{
}

char	*ft_save(char *save)
{
}

char	*ft_getline(char *save)
{
}

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
