/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uppercase_hexadecimal_format.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyao-che <lyao-che@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 07:58:00 by lyao-che          #+#    #+#             */
/*   Updated: 2022/07/26 10:57:50 by lyao-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format_uppercase_hexadecimal(unsigned int value)
{
	int		c;
	char	*str;

	str = ft_itoa_base(value, HEXADECIMAL_U_BASE);
	c = ft_format_string(str);
	free(str);
	return (c);
}
