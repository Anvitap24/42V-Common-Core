/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpatil <anpatil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 12:56:37 by anpatil           #+#    #+#             */
/*   Updated: 2025/11/04 14:52:52 by anpatil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <mcheck.h>
//#include <string.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	o_len;
	size_t	size;
	size_t	i;

	if (!s)
		return (NULL);
	o_len = ft_strlen(s);
	if (o_len < start)
		size = 0;
	else if (o_len < start + len)
		size = o_len - start;
	else
		size = len;
	sub = (char *)malloc(size + 1);
	if (!sub)
		return (NULL);
	i = 0;
	while (i < size && start + i < o_len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = 0;
	return (sub);
}

/* int main(void)
{
	char const s[] = "programming";
	char *sub = ft_substr(s, 3, 7); 
	printf("%s", sub);

	///////////
	// char * s = ft_substr("tripouille", 0, 42000);
	// printf("%s", s);

	free(s);
}  */
