/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 11:21:44 by josfelip          #+#    #+#             */
/*   Updated: 2023/07/31 12:23:21 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*ptrd;

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
