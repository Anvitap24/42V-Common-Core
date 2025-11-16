/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpatil <anpatil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 13:53:08 by anpatil           #+#    #+#             */
/*   Updated: 2025/11/03 18:42:34 by anpatil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
		return (1);
	else
		return (0);
}
/*
int main(void)
{
	unsigned char a;
	unsigned char b;
	
	a = '8';
	int i = ft_isalnum(a);
	b = 'F';
	int j = ft_isalnum(b);
	printf("%d\n", i);
	printf("%d", j);
	return 0;
}
*/