/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyao-che <lyao-che@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 14:40:53 by lyao-che          #+#    #+#             */
/*   Updated: 2022/09/05 14:41:10 by lyao-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mandatory/pipex.h"

static size_t	ft_word_count(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s == c && *s)
		s++;
	while (*s)
	{
		while (*s != c && *s)
			s++;
		while (*s == c && *s)
			s++;
		count++;
	}
	return (count);
}

static size_t	ft_word_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (*s != c && *s)
	{
		len++;
		s++;
	}
	return (len);
}

static char	*ft_strndup(const char *s, size_t n)
{
	char	*pt_strndup;
	size_t	size;

	pt_strndup = malloc(sizeof(char) * (n + 1));
	if (!pt_strndup)
		return (0);
	size = 0;
	while (size < n)
	{
		pt_strndup[size] = s[size];
		size++;
	}
	pt_strndup[size] = '\0';
	return (pt_strndup);
}

static char	*ft_arr_free(char **s, int i)
{
	while (i--)
		free(s[i]);
	free(s);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**pt_split;
	size_t	len;
	size_t	wordlen;
	size_t	i;

	if (!s)
		return (NULL);
	len = ft_word_count(s, c);
	pt_split = malloc(sizeof (char *) * (len + 1));
	if (!pt_split)
		return (NULL);
	i = 0;
	while (i < len)
	{
		while (*s && *s == c)
			s++;
		wordlen = ft_word_len(s, c);
		pt_split[i] = ft_strndup(s, wordlen);
		if (!pt_split[i])
			ft_arr_free(pt_split, i);
		s += wordlen;
		i++;
	}
	pt_split[len] = NULL;
	return (pt_split);
}
