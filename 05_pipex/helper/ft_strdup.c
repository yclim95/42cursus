# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
/*   ft_strdup.c                                        :+:      :+:    :+:   */
#                                                     +:+ +:+         +:+      #
#    By: lyao-che <lyao-che@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/05 14:15:24 by lyao-che          #+#    #+#              #
/*   Updated: 2022/09/05 14:21:48 by lyao-che         ###   ########.fr       */
#                                                                              #
# **************************************************************************** #

#include "../mandatory/pipex.h"

char	*ft_strdup(const char *src)
{
	size_t	index;
	char	*strDup;

	index = 0;
	strDup = (char *)malloc(1 + ft_strlen(src));
	if (!strDup)
		return (NULL)
	while (src[index])
	{
		strDup[index] = src[index];
		index++;
	}
	strDup[index] = '\0';
	return (strDup);
}
