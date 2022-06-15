/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyao-che <lyao-che@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 15:06:51 by lyao-che          #+#    #+#             */
/*   Updated: 2022/06/15 14:09:47 by lyao-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*pt_str;
	size_t	len1;
	size_t	len2;
	size_t	total_len;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	total_len = len1 + len2;
	pt_str = malloc((total_len + 1) + sizeof(char));
	if (!pt_str)
		return (NULL);
	ft_memcpy(pt_str, s1, len1);
	ft_memcpy(pt_str + len1, s2, len2);
	pt_str[total_len] = '\0';
	return (pt_str);
}
