/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_decimal_format.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lim Yao Cheng <lyao-che@student.42kl.edu.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:22:16 by Lim Yao Cheng     #+#    #+#             */
/*   Updated: 2022/07/25 12:24:09 by Lim Yao Cheng    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format_unsigned_decimal(unsigned int value)
{
	int	c;
	char	*str;

	str = ft_itoa_base(value, "0123456789");
	c = ft_string_format(str);
	free(str);
	return (c);
}
