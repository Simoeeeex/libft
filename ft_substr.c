/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouzoub <mbouzoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 23:02:53 by mbouzoub          #+#    #+#             */
/*   Updated: 2026/10/31 18:24:19 by mbouzoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*lmallokage(size_t i)
{
	char	*p;

	p = malloc(sizeof(char) * i);
	if (p == NULL)
		return (NULL);
	if (i == 1)
		p[0] = '\0';
	else
		p[i - 1] = '\0';
	return (p);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*p;

	if (s == NULL)
		return (NULL);
	i = ft_strlen(s);
	if (i <= start)
	{
		p = lmallokage(1);
		if (p == NULL)
			return (NULL);
		return (p);
	}
	if (len > i - start)
		len = i - start;
	p = lmallokage(len + 1);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		p[i] = s[start + i];
		i++;
	}
	return (p);
}
