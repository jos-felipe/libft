/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 11:21:44 by josfelip          #+#    #+#             */
/*   Updated: 2023/08/07 14:15:13 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*ptrd;

	if (!dest && !src)
		return (NULL);
	ptr = (unsigned char *)src;
	ptrd = (unsigned char *)dest;
	if (ptrd < ptr)
		ft_memcpy(dest, src, n);
	else
	{
		while (n--)
			ptrd[n] = ptr[n];
	}
	return (dest);
}
