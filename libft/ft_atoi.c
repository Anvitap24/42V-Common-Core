/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpatil <anpatil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 14:13:48 by anpatil           #+#    #+#             */
/*   Updated: 2025/11/03 18:43:21 by anpatil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	base;
	int	i;

	sign = 1;
	base = 0;
	i = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		base = 10 * base;
		base = base + nptr[i] - '0';
		i++;
	}
	return (base * sign);
}
/*
int main(void)
{
	const char nptr[] = "  -1124";
	int i = ft_atoi(nptr);
	printf("%d", i);
}
*/