/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouzoub <mbouzoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 17:56:15 by mbouzoub          #+#    #+#             */
/*   Updated: 2026/11/07 15:49:48 by mbouzoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*p;
	size_t	i;

	i = 0;
	if (size != 0 && nmemb > (size_t)-1 / size)
		return (NULL);
	if (nmemb == 0 || size == 0)
	{
		p = malloc(1);
		if (p == NULL)
			return (NULL);
		p[0] = 0;
		return (p);
	}
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	while (i < nmemb * size)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
