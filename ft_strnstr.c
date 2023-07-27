/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 14:48:37 by josfelip          #+#    #+#             */
/*   Updated: 2023/07/27 16:01:36 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	b;
	size_t	l;
	char	*ptr;
	
	b = 0;
	l = 0;
	if (little[l] != '\0')
		return (big);
	while (big[b] && b < len)
	{
		while (little[l] && big[b + l] == little[l])
		{
			if (little[l] == '\0')
				return ((char *)(big - l));
			l++;
		}
		l = 0;
		b++
	}
	return (NULL);
}