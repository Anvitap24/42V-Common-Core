/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpatil <anpatil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 14:11:46 by anpatil           #+#    #+#             */
/*   Updated: 2025/11/03 19:30:08 by anpatil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != 0) && (s2[i] != 0) && (i < n))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/* 
int main(void)
{
	// const char s1[] = "Espresso";
	// const char s2[] = "Espresso";
	// size_t n = 7;
	int i = strncmp(NULL, NULL, 1);
	printf("%d", i);
	// int i = ft_strncmp(s1, s2, n);
	// const char s3[] = "Depresso";
	// int j = ft_strncmp(s1, s3, n);
	// const char s4[] = "Macchiato";
	// int k = ft_strncmp(s1, s4, n);
	// printf("%d\n""%d\n""%d", i, j, k);
}
 */