/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyao-che <lyao-che@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 08:38:42 by lyao-che          #+#    #+#             */
/*   Updated: 2022/06/21 07:31:11 by lyao-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	size_t	counter;

	counter  = 0;
	while (str[counter] != '\0')
		counter++;
	return (counter);
}

char	*ft_strchr(char *s, int c)
{
	while (*s != c)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return ((char *)s);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*s;
	size_t	c1;
	size_t	c2;

	if (!s1)
	{
		s1 = malloc(sizeof(char) * 1);
		s1[0] = '\0';
	}
	if (!s1 || !s2)
		return (NULL);
	s = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!s)
		return (NULL);
	c1 = -1;
	c2 = 0;
	if (s1)
		while (s1[++c1] != '\0')
			s[c1] = s1[c1];
	while (s2[c2] != '\0')
		s[c1++] = s2[c2++];
	s[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	free(s1);
	return (str);

}