/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formats.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lim Yao Cheng <lyao-che@student.42kl.edu.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:38:50 by Lim Yao Cheng     #+#    #+#             */
/*   Updated: 2022/07/25 17:54:44 by lyao-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_formats(int i, va_list args)
{
	int	c;

	c = 0;
	if (i == 'c')
		c = ft_format_char(va_arg(args, int));
	else if (i == 's')
		c = ft_format_string(va_arg(args, char *));
	else if (i == 'p')
		c = ft_format_pointer(va_arg(args, void *));
	else if (i == 'i' || c == 'd')
		c = ft_format_decimal(va_arg(args, int));
	else if (i == 'u')
		c = ft_format_hexadecimal(va_arg(args, unsigned long));
	else if (i == 'X')
		c = ft_format_uppercase_hexadecimal(va_arg(args, unsigned long));
	else if (i == '%')
		c = ft_format_percent(i);
	else
		c = 0;
	return (c);
}
