/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lim Yao Cheng <lyao-che@student.42kl.edu.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:49:47 by Lim Yao Cheng     #+#    #+#             */
/*   Updated: 2022/07/25 12:58:34 by Lim Yao Cheng    ###   ########.fr       */
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

	num_len = ft_base_len(num, basE);
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
