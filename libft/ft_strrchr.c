/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpatil <anpatil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 14:11:20 by anpatil           #+#    #+#             */
/*   Updated: 2025/11/01 18:53:27 by anpatil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	s_l;

	s_l = 0;
	while (s[s_l] != 0)
		s_l++;
	while (s_l >= 0)
	{
		if ((unsigned char)s[s_l] != (unsigned char)c)
			s_l--;
		else
			return ((char *)&s[s_l]);
	}
	return (NULL);
}
/*
int main(void)
{
	const char s[] = "Onomatopoeia";
	int	c; 
	c = 111;
	printf("%s\n", ft_strrchr(s, c));
}
*/