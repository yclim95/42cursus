/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_format.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lim Yao Cheng <lyao-che@student.42kl.edu.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 11:57:31 by Lim Yao Cheng     #+#    #+#             */
/*   Updated: 2022/07/25 11:59:51 by Lim Yao Cheng    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_format_string(char *str)
{
	int	c;
	
	c = 0;
	if (!str)
		str = NULL;
	while (str[c] != '\0')
		c += ft_purchar_fd(str[c], 1);
	return (c);
}
