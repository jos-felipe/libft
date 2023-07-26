/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:00:08 by josfelip          #+#    #+#             */
/*   Updated: 2023/07/26 15:17:53 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	unsigned char	_c;

	_c = (unsigned char)c;
	while (*s)
	{
		if (*s == _c)
			return ((char *)s);
		s++;
	}
	if (*s == _c)
		return ((char *)s);
	return (NULL);
}
