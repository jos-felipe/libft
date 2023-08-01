/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:34:24 by josfelip          #+#    #+#             */
/*   Updated: 2023/08/01 14:59:33 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	idx;
	size_t	len;
	char	*s2;

	len = ft_strlen(s1);
	idx = 0;
	while (set[idx])
	{
		if (*s1 == set[idx])
			s1++;
		idx++;
	}
	idx = 0;
	while (set[idx])
	{
		if (s1[len] == set[idx])
			len--;
		idx;
	}
	s2 = (char *)malloc(sizeof(char) * (len + 1));
	s2 = ft_memmove(s2, s1, len);
	s2[len] = '\0';
	return (s2);
}