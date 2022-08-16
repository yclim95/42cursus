/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyao-che <lyao-che@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 08:19:13 by lyao-che          #+#    #+#             */
/*   Updated: 2022/06/06 09:07:40 by lyao-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	us1;
	unsigned char	us2;

	while (n-- > 0)
	{
		us1 = *(unsigned char *)s1++;
		us2 = *(unsigned char *)s2++;
		if (us1 != us2)
			return (us1 - us2);
		if (us1 == '\0')
			return (0);
	}
	return (0);
}
