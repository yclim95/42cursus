/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimal_format.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyao-che <lyao-che@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 07:53:25 by lyao-che          #+#    #+#             */
/*   Updated: 2022/07/26 10:05:20 by lyao-che         ###   ########.fr       */
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
		ft_putchar_fd('-', 1);
		ft_putchar_fd('2', 1);
		*num = 147483648;
		c++;
	}
	else if (*num < 0)
	{
		ft_putchar_fd('-', 1);
		*num *= -1;
		c++;
	}
	return (c);
}

int	ft_format_decimal(int value)
{
	int		c;
	char	*str;

	c = ft_check_negative(&value);
	str = ft_itoa_base(value, "0123456789");
	c += ft_format_string(str);
	free(str);
	return (c);
}
