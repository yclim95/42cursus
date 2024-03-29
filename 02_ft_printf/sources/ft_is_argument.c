/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_argument.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyao-che <lyao-che@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 07:55:06 by lyao-che          #+#    #+#             */
/*   Updated: 2022/07/26 10:54:04 by lyao-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_is_argument(int c)
{
	return (c == 'c' || c == 's' || c == 'p'
		|| c == 'd' || c == 'i'
		|| c == 'u' || c == 'x'
		|| c == 'X' || c == '%');
}
