/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyao-che <lyao-che@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 08:14:13 by lyao-che          #+#    #+#             */
/*   Updated: 2022/07/25 12:10:17 by Lim Yao Cheng    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	ft_parse_input(const char *str, va_list args)
{
	int c;
	int in;

	in = 0;
	c = 0;
	while (str[in])
	{
		if (str[in] != '%')
			c += ft_putchar_fd(str[in], 1);
		else if (str[in + 1] && str[in] == '%')
		{
			in++;
			if (ft_is_argument(str[in]))
				c += ft_formats(str[in], args);
			else if (str[in])
				c += ft_putchar_fd(str[in], 1);

		}
		in++;
	}
	return (c);
}

int	ft_printf(const char *format, ...)
{
	const char	*str;
	int			c;
	va_list		args;

	c = 0;
	str = ft_strdup(format);
	if (!str)
		return (0);
	va_start(args, format);
	c += ft_parse_input(str, args);
	va_end(args);
	free(str);
	return (c);
}
