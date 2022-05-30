/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyao-che <lyao-che@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 12:31:03 by lyao-che          #+#    #+#             */
/*   Updated: 2022/05/30 13:05:29 by lyao-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	c;
	char	*p_funcarg;

	len = ft_strlen(s);
	p_funcarg = malloc(sizeof(char) * (len + 1));
	if (!p_funcarg)
		return (0);
	c = 0;
	while (c < len)
	{
		p_funcarg[c] = f(c, s[c]);
		c++;
	}
	p_funcarg[len] = '\0';
	return (p_funcarg);
}
