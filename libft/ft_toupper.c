/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpatil <anpatil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 14:10:34 by anpatil           #+#    #+#             */
/*   Updated: 2025/10/27 20:10:43 by anpatil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_toupper(int c)
{
	while ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		if (c >= 65 && c <= 90)
			return (c);
		else if ((c >= 97 && c <= 122))
			c = c - 32;
	}
	return (c);
}
/*
int main(void)
{
	int c = 111;
	int d = ft_toupper(c);
	printf("%d", d);
}
*/