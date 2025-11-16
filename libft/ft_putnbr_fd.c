/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpatil <anpatil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:13:24 by anpatil           #+#    #+#             */
/*   Updated: 2025/10/27 20:45:09 by anpatil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//# include <fcntl.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	m;
	char		c;

	m = (long int) n;
	if (m == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (m < 0)
	{
		write(fd, "-", 1);
		m = -m;
	}
	if (m > 9)
		ft_putnbr_fd(m / 10, fd);
	c = (m % 10) + '0';
	write(fd, &c, 1);
}
/*
int    main()
{
    int    fd = 1;

    printf("fd: %d\n", fd);
    ft_putnbr_fd(0, fd);

    close (fd);
    return (0);
}
*/