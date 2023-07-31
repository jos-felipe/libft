/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:18:45 by josfelip          #+#    #+#             */
/*   Updated: 2023/07/31 15:48:33 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

/* char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	s_len;
	size_t	max_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start > s_len)
		return (ft_strdup(""));
	max_len = s_len - start;
	if (max_len > len)
		len = max_len;
	sub = (char *)malloc((max_len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, s + start, max_len + 1);
	return (sub);
} */

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	char	*new_str;
// 	size_t	i;
// 	size_t	j;

// 	if (!s || !(new_str = (char *)malloc(len + 1)))
// 		return (0);
// 	i = start;
// 	j = 0;
// 	while (i < ft_strlen(s) && j < len)
// 		new_str[j++] = s[i++];
// 	new_str[j] = '\0';
// 	return (new_str);
// }

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
	size_t	i;
	size_t	j;
	size_t	s_len;
	char	*str;

	s_len = ft_strlen(s);
	i = s_len - start;
	if (len > i)
		len = i;
	if (i <= 0)
	{
		str = empty_string();
		if (!str)
			return (NULL);
		return (str);
	}
	if (len > s_len)
		len = s_len;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}

/* static char	*empty_string(void)
{
	char	*result;

	result = malloc(1);
	if (result)
		result[0] = 0;
	return (result);
} */

/* static size_t	select_smallest(size_t num1, size_t num2)
{
	if (num1 > num2)
		return (num2);
	return (num1);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*buffer;
	size_t	result_len;
	size_t	s_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len || len == 0)
		return (empty_string());
	result_len = select_smallest(ft_strlen(s + start), len);
	buffer = malloc(sizeof(*buffer) * result_len);
	if (!buffer)
		return (NULL);
	buffer[result_len] = 0;
	ft_strlcpy(buffer, s + start, result_len);
	return (buffer);
} */
