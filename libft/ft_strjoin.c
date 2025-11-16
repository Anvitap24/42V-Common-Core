/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpatil <anpatil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 12:56:56 by anpatil           #+#    #+#             */
/*   Updated: 2025/11/05 14:02:45 by anpatil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	t_strjoin	data;

	if (!s1 && !s2)
		return (NULL);
	else if (!s1)
		return (ft_strdup(s2));
	else if (!s2)
		return (ft_strdup(s1));
	data.l1 = ft_strlen((char *)s1);
	data.l2 = ft_strlen((char *)s2);
	data.join = malloc(data.l1 + data.l2 + 1);
	if (!data.join)
		return (NULL);
	data.i = 0;
	while (data.i < data.l1)
	{
		data.join[data.i] = s1[data.i];
		data.i++;
	}
	data.j = 0;
	while (data.i < data.l1 + data.l2)
		data.join[data.i++] = s2[data.j++];
	data.join[data.i] = 0;
	return (data.join);
}
/* 
int main(void)
{
	char const *s1 = "";
	char const *s2 = "break the internet!";
	char *join = ft_strjoin(s1, s2);
	printf("%s", join);
	free(join);
}
 */