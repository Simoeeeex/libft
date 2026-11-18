/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouzoub <mbouzoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 22:55:40 by mbouzoub          #+#    #+#             */
/*   Updated: 2026/11/05 19:17:27 by mbouzoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	length(char const *s, char c, int i)
{
	int	count;

	count = 0;
	while (s[i] != c && s[i])
	{
		i++;
		count++;
	}
	return (count);
}

static char	*copy(char const *s, int start, int len)
{
	int		i;
	char	*td;

	i = 0;
	td = malloc(sizeof(char) * (len + 1));
	if (!td)
		return (NULL);
	while (i < len)
	{
		td[i] = s[start];
		i++;
		start++;
	}
	td[i] = '\0';
	return (td);
}

static int	words(char const *s, char c)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
		{
			words++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (words);
}

static int	boss(char const *s, char c, char **td)
{
	int	i;
	int	start;
	int	len;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		if (s[i])
		{
			len = length(s, c, start);
			i = i + len;
			td[j] = copy(s, start, len);
			if (!td[j])
				return (j);
			j++;
		}
	}
	td[j] = NULL;
	return (-1);
}

char	**ft_split(char const *s, char c)
{
	char	**td;
	int		j;
	int		i;

	if (!s)
		return (NULL);
	td = malloc(sizeof(char *) * (words(s, c) + 1));
	if (!td)
		return (NULL);
	j = boss(s, c, td);
	if (j != -1)
	{
		i = 0;
		while (i < j)
		{
			free(td[i]);
			i++;
		}
		free(td);
		return (NULL);
	}
	return (td);
}

// #include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     char **result;
//     int i;

//     result = ft_split("xxvxvvxvddghello,x,,worldx,42",'x');
//     if (!result)
//         return (1);
//     i = 0;
//     while (result[i])
//     {
//         printf("%s\n", result[i]);
//         free(result[i]);
//         i++;
//     }
//     free(result);
//     return (0);
// }