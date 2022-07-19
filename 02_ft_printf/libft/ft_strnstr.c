/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyao-che <lyao-che@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 08:52:51 by lyao-che          #+#    #+#             */
/*   Updated: 2022/06/06 09:15:45 by lyao-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t blen)
{
	size_t	l_len;

	if (*little == '\0')
		return ((char *)big);
	l_len = ft_strlen(little);
	while (blen-- >= l_len && *big)
	{
		if (ft_strncmp(big, little, l_len) == 0 && *big == *little)
			return ((char *)big);
		big++;
	}
	return (NULL);
}
