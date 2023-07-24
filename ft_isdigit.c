/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 10:44:15 by josfelip          #+#    #+#             */
/*   Updated: 2023/07/24 11:24:29 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/* #include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	c;

	c = 'a';
	printf("%d, %d\n", isdigit(c), ft_isdigit(c));
	c = '1';
	printf("%d, %d\n", isdigit(c), ft_isdigit(c));
	return (0);
} */
