/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 09:28:53 by josfelip          #+#    #+#             */
/*   Updated: 2023/08/01 14:01:09 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wc(char const *s, char c)
{
	size_t	sig;
	size_t	_wc;

	sig = 0;
	_wc = 0;
	while (*s)
	{
		if (*s != c && sig == 0)
		{
			_wc++;
			sig = 1;
		}
		if (*s == c)
			sig = 0;
		s++;
	}
	return (_wc);
}

static char	*ft_getwrd(char const *s, char c)
{
	size_t	len;
	char	*wrd;

	len = 0;
	while (s[len] != c)
		len++;
	wrd = (char *)malloc(sizeof(char) * (len + 1));
	if (!wrd)
		return (NULL);
	wrd = ft_memmove(wrd, s, len);
	wrd[len] = '\0';
	return (wrd);
}

char	**ft_split(char const *s, char c)
{
	size_t	len;
	size_t	idx;
	char	**_ss;

	len = ft_wc(s, c);
	idx = 0;
	_ss = (char **)malloc(sizeof(char **) * (len + 1));
	if (!_ss)
		return (NULL);
	while (idx < len)
	{
		while (*s)
		{
			if (*s != c)
				_ss[idx] = ft_getwrd(s, c);
			s++;
		}
		idx++;
	}
	_ss[len] = NULL; 
	return (_ss);
}