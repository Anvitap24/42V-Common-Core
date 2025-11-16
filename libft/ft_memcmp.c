/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpatil <anpatil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 14:12:44 by anpatil           #+#    #+#             */
/*   Updated: 2025/11/05 14:05:09 by anpatil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*d;
	unsigned char	*e;
	size_t			i;

	d = (unsigned char *)s1;
	e = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (d[i] != e[i])
			return ((unsigned char)d[i] - (unsigned char)e[i]);
		i++;
	}
	if (i == n)
		return (0);
	return (0);
}
/* 
int main(void)
{
	const char s1[] = "Espresso";
	const char s2[] = "Espresso";
	size_t n = 7;
	int i = ft_memcmp(s1, s2, n);
	const char s3[] = "Depresso";
	int j = ft_memcmp(s1, s3, n);
	const char s4[] = "Macchiato";
	int k = ft_memcmp(s1, s4, n);
	printf("%d\n""%d\n""%d", i, j, k);
}
 */