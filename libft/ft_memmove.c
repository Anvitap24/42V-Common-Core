/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpatil <anpatil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 13:58:41 by anpatil           #+#    #+#             */
/*   Updated: 2025/11/05 14:05:42 by anpatil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"
//#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!d && !s)
		return (NULL);
	if (d == s || n == 0)
		return (dest);
	if (d < s)
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (n--)
			d[n] = s[n];
	}
	return (d);
}
/* 
#include <bsd/string.h>
int main(void)
{
	char buffer[] = "hello";

	// ft_memmove(buffer + 7, buffer, 6);
	// printf("After: %s\n", buffer);
	void *out = ft_memmove(NULL, NULL, 6);
	printf("%p", out);


	
	// char dest[] = "hellofromtheotherside";
	// const char *src = &dest[6];
	// ft_memmove(dest, src, 6);
	// printf("%s\n", dest);
	// printf("%s\n", src);
}  */
/*  
romtheromtheotherside
romtheotherside
*/