/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:23:56 by josfelip          #+#    #+#             */
/*   Updated: 2023/08/05 07:48:52 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	size_t	__n;

	__n = (size_t)n;
	if (n < 0)
	{
		__n *= -1;
		ft_putchar_fd('-', fd);
	}
	if (__n < 10)
		ft_putchar_fd(__n + '0', fd);
	else
	{
		ft_putnbr_fd(__n / 10, fd);
		ft_putnbr_fd(__n % 10, fd);
	}
}

/* int	main(void)
{
	int	_n;
	int	fd;

	_n = 10;
	fd = 1;
	ft_putnbr_fd(_n, fd);
	return (0);
} */