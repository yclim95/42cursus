/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyao-che <lyao-che@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 19:08:41 by lyao-che          #+#    #+#             */
/*   Updated: 2022/06/06 08:03:02 by lyao-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr(char *dest, unsigned int n)
{
	if (n < 10)
		*dest = n + '0';
	else
	{
		*dest = n % 10 + '0';
		ft_putnbr(dest - 1, n / 10);
	}
}

static size_t	ft_num_len(int n)
{
	size_t	c;

	c = 0;
	while (n)
	{
		n /= 10;
		c++;
	}
	return (c);
}

static size_t	ft_set_len(int n)
{
	size_t	len;

	if (n < 0)
		len = ft_num_len(n) + 1;
	else
		len = ft_num_len(n);
	return (len);
}

static unsigned int	ft_set_sign(int n, unsigned int num)
{
	if (n < 0)
		return (-num);
	return (num);
}

char	*ft_itoa(int n)
{
	size_t			len;
	unsigned int	num;
	char			*pt_itoa;

	num = n;
	if (n == 0)
		return (ft_strdup("0"));
	else
	{
		len = ft_set_len(n);
		pt_itoa = malloc(sizeof(char) * (len + 1));
		if (!pt_itoa)
			return (NULL);
		num = ft_set_sign(n, num);
		ft_putnbr(pt_itoa + len - 1, num);
		if (n < 0)
			*pt_itoa = '-';
		pt_itoa[len] = '\0';
	}
	return (pt_itoa);
}
