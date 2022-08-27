/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_char_to_str.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyao-che <lyao-che@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 13:21:14 by lyao-che          #+#    #+#             */
/*   Updated: 2022/08/27 13:33:09 by lyao-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_add_first_char(char c)
{
	char	*addChar;

	add_char = (char *)malloc(sizeof(char) * 2);
	if (!addChar)
		return (NULL);
	addChar[0] = c;
	addChar[1] = '\0';
	return (addChar);
}

char	*ft_add_char_to_str(char *str, char c)
{
	int	count;
	char	*addChar;

	if (!c)
		return (NULL);
	if (!str)
		return (ft_add_first_char(c));
	addChar = (char *)malloc(sizeof(char) * (2 + ft_strlen(str)));
	if (!addChar)
	{
		free(str);
		return (NULL);
	}
	count = 0;
	while (str[count])
	{
		addChar[count] = str[count];
		c++;
	}
	free(str);
	addChar[count++] = c;
	addChar[count] = '\0';
	return (addChar);
}
