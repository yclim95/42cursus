/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_format.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyao-che <lyao-che@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 07:57:26 by lyao-che          #+#    #+#             */
/*   Updated: 2022/07/26 09:54:12 by lyao-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
                                                                      
#include "ft_printf.h"

int	ft_format_string(char *str)
{
	int	c;
	
	c = 0;
	if (!str)
		str = "(null)";
	while (str[c] != '\0')
		c += ft_putchar_fd(str[c], 1);
	return (c);
}
