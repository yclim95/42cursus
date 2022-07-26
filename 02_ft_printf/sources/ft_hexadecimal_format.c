/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal_format.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyao-che <lyao-che@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 07:54:41 by lyao-che          #+#    #+#             */
/*   Updated: 2022/07/26 10:51:31 by lyao-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format_hexadecimal(unsigned int value)
{
	int		c;
	char	*str;

	str = ft_itoa_base(value, HEXADECIMAL_L_BASE);
	c = ft_format_string(str);
	free(str);
	return (c);
}
