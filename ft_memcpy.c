/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 10:52:56 by josfelip          #+#    #+#             */
/*   Updated: 2023/08/07 14:12:17 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*ptrd;

	if (!dest && !src)
		return (NULL);
	ptr = (unsigned char *)src;
	ptrd = (unsigned char *)dest;
	while (n--)
		*ptrd++ = *ptr++;
	return (dest);
}
