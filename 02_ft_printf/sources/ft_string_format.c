/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_format.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lim Yao Cheng <lyao-che@student.42kl.edu.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 11:57:31 by Lim Yao Cheng     #+#    #+#             */
/*   Updated: 2022/07/25 17:56:36 by lyao-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format_string(char *str)
{
	int	c;
	
	c = 0;
	if (!str)
		str = NULL;
	while (str[c] != '\0')
		c += ft_putchar_fd(str[c], 1);
	return (c);
}
