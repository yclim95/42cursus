/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_decimal_format.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyao-che <lyao-che@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 07:57:41 by lyao-che          #+#    #+#             */
/*   Updated: 2022/07/26 07:57:43 by lyao-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format_unsigned_decimal(unsigned int value)
{
	int	c;
	char	*str;

	str = ft_itoa_base(value, "0123456789");
	c = ft_format_string(str);
	free(str);
	return (c);
}
