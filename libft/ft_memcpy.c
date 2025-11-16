/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpatil <anpatil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 13:58:16 by anpatil           #+#    #+#             */
/*   Updated: 2025/11/05 14:01:34 by anpatil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	while (n--)
	{
		*d = *s;
		d++;
		s++;
	}
	return (dest);
}
/* #include <bsd/string.h>
int main(void)
{
	char dest[] = "hellofromtheotherside";
	char dest2[] = "hellofromtheotherside";
	printf("%s\n", dest);
	const char src[] = "divorcebabe";
	// ft_memcpy(NULL, NULL, 12);
	memcpy(NULL, NULL, 12);
	printf("%s\n", dest);
	printf("%s\n", dest2);
}
 */