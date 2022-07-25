/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uppercase_hexadecimal_format.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lim Yao Cheng <lyao-che@student.42kl.edu.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:28:33 by Lim Yao Cheng     #+#    #+#             */
/*   Updated: 2022/07/25 12:29:41 by Lim Yao Cheng    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format_uppercase_heaxadecimal(unsigned int value)
{
	int	c;
	char	*str;

	str = ft_itoa_base(value, HEXADECIMAL_U_BASE);
	c = ft_string_format(str);
	free(str);
	return (c);
}
