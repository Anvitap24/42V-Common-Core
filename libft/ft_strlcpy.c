/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpatil <anpatil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 13:59:02 by anpatil           #+#    #+#             */
/*   Updated: 2025/11/02 14:42:40 by anpatil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_l;

	src_l = 0;
	while (src[src_l] != 0)
		src_l++;
	if (size == 0)
		return (src_l);
	i = 0;
	while ((i < size - 1) && (src[i] != 0))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (src_l);
}
/*
int main(void)
{
	char dst[100] = "It isn't";
	const char src[] = "in my blood";
	size_t l = 0;
	size_t f = ft_strlcpy(dst, src, l);
	printf("%zu\n", f);
	printf("%s", dst);
}
*/