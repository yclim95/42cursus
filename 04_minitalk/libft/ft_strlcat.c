/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyao-che <lyao-che@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 15:21:47 by lyao-che          #+#    #+#             */
/*   Updated: 2022/06/06 08:11:16 by lyao-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	total_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (dest_len > size)
		dest_len = size;
	if (dest_len == size)
		return (size + src_len);
	total_len = dest_len + src_len;
	if (src_len >= size - dest_len)
	{
		ft_memcpy(dest + dest_len, src, size - dest_len - 1);
		dest[size - 1] = '\0';
	}
	else
	{
		ft_memcpy(dest + dest_len, src, src_len);
		dest[total_len] = '\0';
	}
	return (total_len);
}
