/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimal_format.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lim Yao Cheng <lyao-che@student.42kl.edu.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:14:44 by Lim Yao Cheng     #+#    #+#             */
/*   Updated: 2022/07/25 12:19:13 by Lim Yao Cheng    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check_negative(int *num)
{
	int	c;

	c = 0;
	if (*num == INT_MIN)
	{
		c = 1;
		ft_putchar('-', 1);
		ft_putchar('2', 1);
		*num = 147483648;
		c++;
	}
	else if (*num < 0)
	{
		ft_putchar_fd('-', 1);
		*value *= -1;
		c++;
	}
	return (c);
}

int	ft_format_decimal(int value)
{
	int	c;
	char	*str;

	c = ft_check_negative(&value);
	str = ft_itoa_base(value, "0123456789");
	c += ft_format_string(str);
	free(str);
	return (c);
}
