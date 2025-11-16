/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpatil <anpatil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 13:56:59 by anpatil           #+#    #+#             */
/*   Updated: 2025/11/03 18:38:54 by anpatil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}

/* int	main()
{
	char	buffer[] = "Arsela!";
	int	i;

	printf("Before: %s\n", buffer);
	i = 0;
	while (i < 9)
	{
		printf("buffer[%d] = %c (%d)\n", i, buffer[i], buffer[i]);
		i++;
	}
	printf("\n");

	ft_bzero(buffer, 3);
	printf("After:\n");
	i = 0;
	while (i < 9)
	{
		printf("buffer[%d] = %c (%d)\n", i, buffer[i], buffer[i]);
		i++;
	}
	printf("\n");
	return (0);
} */
