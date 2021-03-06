/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyao-che <lyao-che@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 15:53:10 by lyao-che          #+#    #+#             */
/*   Updated: 2022/06/15 08:39:50 by lyao-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*pdest;
	const unsigned char	*psrc;

	if (!src && !dest)
		return (0);
	if (dest > src)
	{
		pdest = dest + n;
		psrc = src + n;
		while (n-- > 0)
			*(--pdest) = *(--psrc);
	}
	else
	{
		pdest = dest;
		psrc = src;
		while (n-- > 0)
			*pdest++ = *psrc++;
	}
	return (dest);
}
