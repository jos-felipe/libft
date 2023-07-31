/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 14:48:37 by josfelip          #+#    #+#             */
/*   Updated: 2023/07/30 13:25:47 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	len_little;

	i = 0;
	len_little = ft_strlen(little);
	if (!len_little)
		return ((char *)big);
	while (big[i] && len_little <= len--)
	{
		if (big[i] == little[0])
		{
			if (!ft_strncmp(&big[i], little, len_little))
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
