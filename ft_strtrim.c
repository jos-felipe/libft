/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felipe <felipe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:34:24 by josfelip          #+#    #+#             */
/*   Updated: 2023/08/04 14:30:41 by felipe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/* char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	idx;
	size_t	beg;
	size_t	end;
	char	*s2;

	idx = 0;
	beg = 0;
	end = ft_strlen(s1) - 1;
	while (set[idx])
	{
		while (s1[beg] && s1[beg] == set[idx])
			beg++;
		idx++;
	}
	idx = ft_strlen(set) - 1;
	while (set[idx])
	{
		while (s1[end] && s1[end] == set[idx])
			end--;
		idx--;
	}
	idx = end - beg + 1;
	s2 = (char *)malloc(sizeof(char) * (idx + 1));
	s2 = ft_memmove(s2, &s1[beg], idx);
	s2[idx] = '\0';
	printf("s2 = %s\n", s2);
	return (s2);
} */

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	
	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}