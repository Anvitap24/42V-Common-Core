/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpatil <anpatil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:11:02 by anpatil           #+#    #+#             */
/*   Updated: 2025/11/05 14:06:10 by anpatil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

static int	ft_wordcount(char const *s, char c)
{
	int	w_count;
	int	i;

	i = 0;
	w_count = 0;
	while (s[i] != 0)
	{
		if (s[i] != c)
		{
			w_count++;
			while (s[i] != 0 && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (w_count);
}

static int	ft_wordlen(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != 0 && s[i] != c)
		i++;
	return (i);
}

static char	**ft_free(char **str, int i)
{
	while (i >= 0)
	{
		free(str[i]);
		i--;
	}
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	str = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != 0)
	{
		if (s[i] != c)
		{
			str[j] = ft_substr(s, i, ft_wordlen(&s[i], c));
			if (!str[j])
				return (ft_free(str, j));
			j++;
			i = i + ft_wordlen(&s[i], c);
		}
		else
			i++;
	}
	return (str[j] = 0, str);
}
/* 
int main(void)
{
	char *s = "    hello   ;   bla                   ;";
	char c = ';';
	char **str = ft_split(s, c);
	int i = 0;
	while(str && str[i])
	{
		printf("%s\n", str[i]);
		i++;
	}
	ft_free(str, --i);
}
 */