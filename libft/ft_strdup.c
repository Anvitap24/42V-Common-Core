/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpatil <anpatil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 14:14:29 by anpatil           #+#    #+#             */
/*   Updated: 2025/10/27 20:12:47 by anpatil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		size;
	char	*dup;
	int		i;

	size = ft_strlen((char *)s) + 1;
	dup = malloc(size);
	if (!dup)
		return (NULL);
	i = 0;
	while (s[i] != 0)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = 0;
	return (dup);
}
/*
int main(void)
{
	char s[] = "copycat";
	printf("%s", ft_strdup(s));
}
*/