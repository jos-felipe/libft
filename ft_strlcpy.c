/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:07:27 by josfelip          #+#    #+#             */
/*   Updated: 2023/08/05 07:49:29 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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

/* int	main(void)
{
	char	*src;
	char	*dst;
	size_t	len;

	src = "felipe";
	dst = (char *)malloc(ft_strlen(src) + 1);
	len = ft_strlcpy(dst, src, ft_strlen(src) + 1);
	printf("src = %s, dst = %s, size = %lu", src, dst, len);
	return (0);
} */
