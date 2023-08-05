/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:18:45 by josfelip          #+#    #+#             */
/*   Updated: 2023/08/02 11:54:21 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_min(size_t start, size_t len)
{
	if (start < len)
		return (start);
	return (len);
}

static char	*empty_string(void)
{
	char	*result;

	result = malloc(1);
	if (result)
		result[0] = 0;
	return (result);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*str;

	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		str = empty_string();
		if (!str)
			return (NULL);
		return (str);
	}
	s_len -= (size_t)start;
	if (len > s_len)
		len = s_len;
	len = ft_min(s_len, len);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}
