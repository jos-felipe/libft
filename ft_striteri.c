/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 21:03:52 by josfelip          #+#    #+#             */
/*   Updated: 2023/08/05 07:49:15 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	len;
	size_t	idx;

	len = ft_strlen(s);
	idx = 0;
	while (idx < len)
	{
		f(idx, &s[idx]);
		idx++;
	}
}
