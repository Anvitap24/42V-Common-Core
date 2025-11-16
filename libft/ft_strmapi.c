/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpatil <anpatil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:11:52 by anpatil           #+#    #+#             */
/*   Updated: 2025/11/04 16:47:07 by anpatil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"
/*
static char	func(unsigned int i, char c)
{
	if ((i % 4 == 0) && ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
		c = c + 2;
	return (c);
}
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	if (!s || !f)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = 0;
	return (str);
}
/*
int main(void)
{
	char const *s = "Randominette";
	char *result = ft_strmapi(s, func);
	printf("%s", result);
}
*/