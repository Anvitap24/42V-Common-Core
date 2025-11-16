/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpatil <anpatil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 13:56:40 by anpatil           #+#    #+#             */
/*   Updated: 2025/10/27 20:09:22 by anpatil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	d;

	p = (unsigned char *)s;
	d = (unsigned char)c;
	while (n--)
	{
		*p = d;
		p++;
	}
	return (s);
}
/*
int main(void)
{
	char str[] = "figuringitout";
	ft_memset(str, 111, 8);
	printf("%s", str);
}
*/