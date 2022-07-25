/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal_format.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lim Yao Cheng <lyao-che@student.42kl.edu.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:25:30 by Lim Yao Cheng     #+#    #+#             */
/*   Updated: 2022/07/25 12:27:13 by Lim Yao Cheng    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format_heaxadecimal(unsigned int value)
{
	int	c;
	char	*str;

	str = ft_itoa_base(value, HEXADECIMAL_L_BASE);
	c = ft_format_string(str);
	free(str);
	return (c);
}
