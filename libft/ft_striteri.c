/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpatil <anpatil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:12:10 by anpatil           #+#    #+#             */
/*   Updated: 2025/10/28 13:54:08 by anpatil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"
/*
static void	func(unsigned int i, char *c)
{
	if ((i % 4 == 0) && ((*c >= 'a' && *c <= 'z') || (*c >= 'A' && *c <= 'Z')))
	{
		*c = *c + 2;
	}
}
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*
int main(void)
{
	char s[] = "Matsuri";
	ft_striteri(s, func);
	printf("%s\n", s);
}
*/