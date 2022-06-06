/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyao-che <lyao-che@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 11:51:33 by lyao-che          #+#    #+#             */
/*   Updated: 2022/06/06 09:14:27 by lyao-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*target;
	size_t	len;

	len = ft_strlen(s);
	target = malloc((len + 1) * sizeof(char));
	if (!target)
		return (NULL);
	len = 0;
	while (s[len])
	{
		target[len] = s[len];
		len++;
	}
	target[len] = '\0';
	return (target);
}
