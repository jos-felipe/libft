/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 12:32:34 by josfelip          #+#    #+#             */
/*   Updated: 2023/08/05 07:48:29 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	_c;

	ptr = (unsigned char *)s;
	_c = (unsigned char)c;
	while (n--)
	{
		if (*ptr == _c)
			return (ptr);
		ptr++;
	}
	return (NULL);
}
