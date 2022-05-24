/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyao-che <lyao-che@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 14:38:36 by lyao-che          #+#    #+#             */
/*   Updated: 2022/05/24 14:43:16 by lyao-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char *pdest;
	const char *psrc;

	pdest = dest;
	psrc = src;
	if (!dest && !src)
		return (0);
	while (n-- > 0)
	{
		*pdest = *src;
		pdest++;
		src++;
	}
	return (dest);
}
