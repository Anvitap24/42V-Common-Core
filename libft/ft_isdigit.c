/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpatil <anpatil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 13:51:24 by anpatil           #+#    #+#             */
/*   Updated: 2025/11/03 18:43:03 by anpatil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
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
	int i = ft_isdigit(a);
	b = 'F';
	int j = ft_isdigit(b);
	printf("%d\n", i);
	printf("%d", j);
	return 0;
}
*/