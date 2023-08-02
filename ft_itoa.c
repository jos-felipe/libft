/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 23:46:24 by josfelip          #+#    #+#             */
/*   Updated: 2023/08/02 14:02:27 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_neghdl(size_t *len, size_t *__n, size_t *idx)
{
		*len += 1;
		*__n *= -1;
		*idx = 1;
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
	size_t	__n;
	size_t	idx;
	char	*str;

	len = ft_ilen(n);
	__n = (size_t)n;
	idx = 0;
	if (n < 0)
		ft_neghdl(&len, &__n, &idx);
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
