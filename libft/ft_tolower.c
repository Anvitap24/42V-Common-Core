/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpatil <anpatil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 14:10:47 by anpatil           #+#    #+#             */
/*   Updated: 2025/10/27 20:10:47 by anpatil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_tolower(int c)
{
	while ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		if (c >= 97 && c <= 122)
			return (c);
		else if (c >= 65 && c <= 90)
			c = c + 32;
	}
	return (c);
}
/*
int main(void)
{
	int c = 79;
	int d = ft_tolower(c);
	printf("%d", d);
}
*/