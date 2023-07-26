/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 11:21:44 by josfelip          #+#    #+#             */
/*   Updated: 2023/07/26 12:25:07 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*ptrd;

	ptr = (unsigned char *)src;
	ptrd = (unsigned char *)dest;
	if (ptrd < ptr)
		while (n--)
			*ptrd++ = *ptr++;
	else
	{
		ptr += n;
		ptrd += n;
		while (n--)
			*--ptrd = *--ptr;
	}
	return (dest);
}
