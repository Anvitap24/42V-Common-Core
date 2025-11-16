/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpatil <anpatil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 14:09:43 by anpatil           #+#    #+#             */
/*   Updated: 2025/11/05 14:02:33 by anpatil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	src_l;
	size_t	dst_l;

	src_l = ft_strlen(src);
	dst_l = 0;
	while (dst[dst_l] && dst_l < size)
		dst_l++;
	if (size == 0)
		return (src_l);
	if (size <= dst_l)
		return (size + src_l);
	i = dst_l;
	j = 0;
	while ((i + j < size - 1) && (src[j] != 0))
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = 0;
	return (dst_l + src_l);
}
/* 
#include <bsd/string.h>
int main(void)
{
	char dst[20] = "It isn't";
	char dst2[20] = "It isn't";
	const char src[] = "in my blood";
	size_t l = 1;
	size_t f = ft_strlcat(dst, src, l);
	size_t f2 = strlcat(dst2, src, l);
	printf("ft: %s\n", dst);
	printf("og: %s\n", dst2);
	printf("Length ft: %zu\n", f);
	printf("Length og: %zu\n", f2);
}
 */
