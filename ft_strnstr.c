/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouzoub <mbouzoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 17:21:31 by mbouzoub          #+#    #+#             */
/*   Updated: 2026/10/23 17:31:30 by mbouzoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				i;
	size_t				j;

	p1 = (const unsigned char *)big;
	p2 = (const unsigned char *)little;
	if (ft_strlen(little) == 0)
		return ((char *)big);
	i = 0;
	while (i < len && p1[i])
	{
		j = 0;
		while (i + j < len && p1[i + j] && p1[i + j] == p2[j])
			j++;
		if (p2[j] == '\0')
			return ((char *)&p1[i]);
		i++;
	}
	return (NULL);
}
