/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpatil <anpatil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:10:42 by anpatil           #+#    #+#             */
/*   Updated: 2025/11/04 15:32:04 by anpatil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	int		i;
	int		j;
	int		f;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1);
	if (j == 0 || i >= j)
		return (ft_strdup(""));
	j--;
	while (j >= i && ft_strrchr(set, s1[j]))
		j--;
	trim = (char *)malloc((j - i + 2) * sizeof(char));
	if (!trim)
		return (NULL);
	f = 0;
	while (i <= j)
		trim[f++] = s1[i++];
	trim[f] = 0;
	return (trim);
}
/*
int main(void)
{
	// char const *s1 = "feelin' good";
	// char const *set = "feod";
	// char *trim = ft_strtrim(s1, set);

	char *s = ft_strtrim("tripouille   xxx", " x");
	printf("%s", s);
	free(s);
}*/