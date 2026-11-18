/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouzoub <mbouzoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 18:58:23 by mbouzoub          #+#    #+#             */
/*   Updated: 2026/10/31 18:40:07 by mbouzoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is(char const s1, char const *c)
{
	int	i;

	i = 0;
	while (c[i])
	{
		if (s1 == c[i])
			return (1);
		i++;
	}
	return (0);
}

static char	*copy_trim(char const *s1, int start, int end)
{
	int		j;
	char	*p;

	j = 0;
	p = malloc(sizeof(char) * (end - start + 2));
	if (!p)
		return (NULL);
	while (start <= end)
		p[j++] = s1[start++];
	p[j] = '\0';
	return (p);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	start;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && is(s1[i], set))
		i++;
	start = i;
	i = ft_strlen(s1) - 1;
	while (i >= start && is(s1[i], set))
		i--;
	if (start > i)
		return (ft_strdup(""));
	return (copy_trim(s1, start, i));
}
