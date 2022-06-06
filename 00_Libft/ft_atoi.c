/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyao-che <lyao-che@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 08:22:58 by lyao-che          #+#    #+#             */
/*   Updated: 2022/06/06 07:40:35 by lyao-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	num;
	int	sign;

	num = 0;
	sign = 1;
	while (*nptr == ' ' || (*nptr >= '\t' && *nptr <= '\r'))
		nptr++;
	if (*nptr == '-')
		sign = -1;
	while (*nptr != '\0')
	{
		if (*nptr >= '0' && *nptr <= '9')
			num = (*nptr - '0') + (num * 10);
		nptr++;
	}
	return (num * sign);
}
