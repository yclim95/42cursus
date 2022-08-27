/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_numeric_str.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyao-che <lyao-che@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 13:10:42 by lyao-che          #+#    #+#             */
/*   Updated: 2022/08/27 13:15:47 by lyao-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_numeric_str(char *str)
{
	int	c;

	c = 0;
	if (str[0] == '-')
		c++;
	while (str[c++])
	{
		if(!ft_isdigit(str[c]))
			return (0);
	}
	return (1);
}
