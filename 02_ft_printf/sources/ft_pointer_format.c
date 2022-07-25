/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer_format.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lim Yao Cheng <lyao-che@student.42kl.edu.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:01:31 by Lim Yao Cheng     #+#    #+#             */
/*   Updated: 2022/07/25 17:57:22 by lyao-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_prefix(char *str)
{
	int	c;
	
	c = ft_format_string(str);
	return (c);
}

int	ft_format_pointer(void *ptr)
{
	int		c;
	unsigned long	address;
	char		*str;

	address = (unsigned long)ptr;
	c = ft_print_prefix("0x");
	str = ft_itoa_base(address, HEXADECIMAL_L_BASE);
	c += ft_format_string(str);
	free(str);
	return (c);
}
