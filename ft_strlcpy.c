/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:07:27 by josfelip          #+#    #+#             */
/*   Updated: 2023/07/27 11:39:13 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	l;

	l = 0;
	if (!dst || !src)
		return (0);
	while (src[l] && l + 1 < size)
	{
		dst[l] = src[l];
		l++;
	}
	if (size)
		dst[l] = '\0';
	while (src[l])
		l++;
	return (l);
}
