/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyao-che <lyao-che@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 14:13:00 by lyao-che          #+#    #+#             */
/*   Updated: 2022/06/15 13:13:48 by lyao-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr_pt;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	substr_pt = malloc((len + 1) * sizeof(char));
	if (!substr_pt)
		return (NULL);
	ft_memcpy(substr_pt, start + s, len);
	substr_pt[len] = '\0';
	return (substr_pt);
}
