/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyao-che <lyao-che@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 15:35:46 by lyao-che          #+#    #+#             */
/*   Updated: 2022/06/15 10:20:12 by lyao-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr_trim;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1) != 0)
		s1++;
	len = ft_strlen(s1);
	while (len && ft_strchr(set, s1[len - 1]) != 0)
		len--;
	ptr_trim = malloc((len + 1) * sizeof(char));
	if (!ptr_trim)
		return (NULL);
	ft_memcpy(ptr_trim, s1, len);
	ptr_trim[len] = '\0';
	return (ptr_trim);
}
