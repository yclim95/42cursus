/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyao-che <lyao-che@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 07:58:42 by lyao-che          #+#    #+#             */
/*   Updated: 2022/07/26 08:26:07 by lyao-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_base_len(unsigned long long num, char *base)
{
	unsigned long long	base_len;
	size_t			len;

	len = 1;
	base_len = ft_strlen(base);
	while (num >= base_len)
	{
		num /= base_len;
		len++;
	}
	return (len);
}

char	*ft_itoa_base(unsigned long long num, char *base)
{
	int	num_len;
	int	base_len;
	char	*str;

	num_len = ft_base_len(num, base);
	base_len = ft_strlen(base);
	if (!str)
		return (NULL);
	while (num_len)
	{
		num_len = num_len - 1;
		str[num_len] = base[num % base_len];
		num /= base_len;
	}
	return (str);
}
