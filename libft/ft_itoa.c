/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpatil <anpatil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:11:33 by anpatil           #+#    #+#             */
/*   Updated: 2025/10/27 20:36:44 by anpatil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

static int	ft_spaces(int n)
{
	int		i;
	long	m;

	i = 0;
	m = n;
	if (m < 0)
	{
		m = -m;
		i++;
	}
	if (m == 0)
		return (1);
	while (m > 0)
	{
		m = m / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;
	long	m;

	m = n;
	i = ft_spaces(n);
	str = malloc((sizeof(char) * i) + 1);
	if (!str)
		return (NULL);
	str[i] = 0;
	if (m == 0)
		return (str[0] = '0', str);
	if (m < 0)
	{
		m = -m;
		str[0] = '-';
	}
	while (m > 0)
	{
		str[--i] = (m % 10) + '0';
		m /= 10;
	}
	return (str);
}
/*
int main(void)
{
	int n = 1124;
	int m = -4211;
	int l = 0;

	char *str = ft_itoa(n);
	printf("%s\n", str);
	char *str1 = ft_itoa(m);
	printf("%s\n", str1);
	char *str2 = ft_itoa(l);
	printf("%s", str2);
}
*/