/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyao-che <lyao-che@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 14:29:44 by lyao-che          #+#    #+#             */
/*   Updated: 2022/09/05 14:37:54 by lyao-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mandatory/pipex.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	index;
	size_t	jInd;
	char	*strJ;

	strJ = (char *)malloc(1 + (ft_strlen(s1) + ft_strlen(s2)) * sizeof(char));
	if (!strJ)
		return (NULL);
	index = 0;
	while (s1[index] != '\0')
	{
		strJ[index] = s1[index];
		index++;
	}
	jInd = 0;
	while (s2[jInd] != '\0')
	{
		strJ[index] = s2[jInd];
		index++;
		jInd++;
	}
	strJ[index] = '\0';
	return (strJ);
}
