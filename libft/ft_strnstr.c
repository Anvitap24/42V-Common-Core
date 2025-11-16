/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpatil <anpatil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 14:13:03 by anpatil           #+#    #+#             */
/*   Updated: 2025/11/05 14:01:52 by anpatil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == 0)
		return ((char *)big);
	while (i < len && big[i] != 0)
	{
		j = 0;
		while ((i + j < len) && (little[j] != 0) && (big[i + j] == little[j]))
			j++;
		if (little[j] == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
/* #include <bsd/string.h>
int main(void)
{
	const char *big = "";
	const char *little = "";
	int	l = 8;
	char *ptr = ft_strnstr(big, little, l);
	char *ptr2 = strnstr(big, little, l);
	printf("%s\n", ptr);
	printf("%s\n", ptr2);
}
 */