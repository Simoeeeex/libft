/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouzoub <mbouzoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 23:02:05 by mbouzoub          #+#    #+#             */
/*   Updated: 2026/11/07 16:31:47 by mbouzoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	x;
	char	*p;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = ft_strlen(s1);
	x = ft_strlen(s2);
	p = malloc(sizeof(char) * (i + x + 1));
	if (p == NULL)
		return (NULL);
	i = 0;
	x = 0;
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	while (s2[x])
	{
		p[i + x] = s2[x];
		x++;
	}
	p[i + x] = '\0';
	return (p);
}
