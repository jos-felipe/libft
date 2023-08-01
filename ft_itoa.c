/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 23:46:24 by josfelip          #+#    #+#             */
/*   Updated: 2023/08/01 09:19:31 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	size_t	__n;
	size_t	idx;
	char	*str;

	len = ft_ilen(n);
	__n = (size_t)n;
	idx = 0;
	if (n < 0)
	{
		len++;
		__n *= -1;
		idx = 1;
	}
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (idx)
		str[0] = '-';
	while (idx < len)
	{
		str[idx] = (char)(__n % 10 + '0');
		__n /= 10;
		idx++;
	}
	str[idx] = '\0';
	return (str);
}
