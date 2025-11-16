/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpatil <anpatil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 14:11:06 by anpatil           #+#    #+#             */
/*   Updated: 2025/10/27 20:11:37 by anpatil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != 0)
	{
		if (s[i] != (char)c)
			i++;
		else
			return ((char *)&s[i]);
	}
	if ((char)c == 0)
		return ((char *)&s[i]);
	return (NULL);
}
/*
int main(void)
{
	const char s[] = "Pleasework";
	int	c; 
	c = 111;
	printf("%s\n", ft_strchr(s, c));
}
*/