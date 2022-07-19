/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyao-che <lyao-che@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 12:31:03 by lyao-che          #+#    #+#             */
/*   Updated: 2022/06/15 14:31:52 by lyao-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	c;
	char	*p_funcarg;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	p_funcarg = malloc(sizeof(char) * (len + 1));
	if (!p_funcarg)
		return (NULL);
	c = 0;
	while (c < len)
	{
		p_funcarg[c] = f(c, s[c]);
		c++;
	}
	p_funcarg[len] = '\0';
	return (p_funcarg);
}
