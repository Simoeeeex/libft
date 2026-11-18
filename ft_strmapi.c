/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouzoub <mbouzoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 00:13:04 by mbouzoub          #+#    #+#             */
/*   Updated: 2026/11/05 17:43:51 by mbouzoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*y;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	y = malloc(ft_strlen(s) + 1);
	if (!y)
		return (NULL);
	i = 0;
	while (s[i])
	{
		y[i] = f(i, s[i]);
		i++;
	}
	y[i] = '\0';
	return (y);
}
