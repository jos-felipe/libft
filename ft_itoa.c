/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felipe <felipe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 23:46:24 by josfelip          #+#    #+#             */
/*   Updated: 2023/08/02 17:13:39 by felipe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_neghdl(size_t *len, size_t *idx, int n)
{
	size_t	__n;

	if (n < 0)
	{
		*len += 1;
		*idx = 1;
		__n = -(size_t)n;
	}
	else
		__n = +(size_t)n;
	return (__n);
}

static size_t	ft_ilen(int n)
{
	size_t	len;

	n /= 10;
	len = 1;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t	len;
	size_t	idx;
	size_t	__n;
	char	*str;

	len = ft_ilen(n);
	idx = 0;
	__n = ft_neghdl(&len, &idx, n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (idx)
		*str = '-';
	str[len] = '\0';
	while (idx < len--)
	{
		str[len] = (char)(__n % 10 + '0');
		__n /= 10;
	}
	return (str);
}
