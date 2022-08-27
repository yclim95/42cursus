/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_char_to_str.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyao-che <lyao-che@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 13:21:14 by lyao-che          #+#    #+#             */
/*   Updated: 2022/08/27 14:00:01 by lyao-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_add_first_char(char c)
{
	char	*add_char;

	add_char = (char *)malloc(sizeof(char) * 2);
	if (!add_char)
		return (NULL);
	add_char[0] = c;
	add_char[1] = '\0';
	return (add_char);
}

char	*ft_add_char_to_str(char *str, char c)
{
	char	*add_char;
	int		c;

	if (!c)
		return (NULL);
	if (!str)
		return (ft_add_first_char(c));
	add_char = (char *)malloc(sizeof(char) * (2 + ft_strlen(str)));
	if (!add_char)
	{
		free(str);
		return (NULL);
	}
	count = 0;
	while (str[count])
	{
		add_char[count] = str[count];
		c++;
	}
	free(str);
	add_char[count++] = c;
	add_char[count] = '\0';
	return (add_char);
}
