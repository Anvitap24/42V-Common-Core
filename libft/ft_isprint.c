/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpatil <anpatil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 13:54:09 by anpatil           #+#    #+#             */
/*   Updated: 2025/11/04 17:32:15 by anpatil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/* int main(void)
{
	unsigned char a;
	unsigned char b;
	
	a = ' ';
	int i = ft_isprint(a - 1);
	b = ' ';
	int j = isprint(b - 1);
	// b = 'F';
	// int j = ft_isprint(b);
	printf("mine: %d\n", i);
	printf("theirs: %d", j);
	return 0;
} */
