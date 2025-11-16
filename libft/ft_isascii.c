/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpatil <anpatil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 13:53:43 by anpatil           #+#    #+#             */
/*   Updated: 2025/11/03 18:42:58 by anpatil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
int main(void)
{
	unsigned char a;
	unsigned char b;
	
	a = '4';
	int i = ft_isascii(a);
	b = 'F';
	int j = ft_isascii(b);
	printf("%d\n", i);
	printf("%d", j);
	return 0;
}
*/