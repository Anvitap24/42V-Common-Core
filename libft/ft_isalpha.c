/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpatil <anpatil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 18:34:56 by anpatil           #+#    #+#             */
/*   Updated: 2025/11/03 18:42:53 by anpatil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
/*
int main(void)
{
	unsigned char a;
	unsigned char b;
	
	a = ')';
	int i = ft_isalpha(a);
	b = 'F';
	int	j = ft_isalpha(b);
	printf("%d\n", i);
	printf("%d", j);
	return (0);
}
*/