/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpatil <anpatil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 14:12:15 by anpatil           #+#    #+#             */
/*   Updated: 2025/11/01 17:32:54 by anpatil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*d;
	unsigned char		e;
	size_t				i;

	d = (const unsigned char *)s;
	e = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (d[i] == e)
			return ((void *)&d[i]);
		i++;
	}
	return (NULL);
}
/*
int main(void)
{
	const char s[] = "Onomatopoeia";
	int c = 111;
	size_t n = 5;
	printf("%s", (char *)ft_memchr(s, c, n));
}
*/