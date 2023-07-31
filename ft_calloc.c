/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 09:23:58 by josfelip          #+#    #+#             */
/*   Updated: 2023/07/31 10:54:09 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	int		target_size;
	void	*result;

	if (nmemb == (size_t)INT_MIN && size == (size_t)INT_MIN)
		return (NULL);
	target_size = nmemb * size;
	if (target_size != 0 && target_size / nmemb != size)
		return (NULL);
	result = malloc(target_size);
	ft_bzero(result, target_size);
	return (result);
}
