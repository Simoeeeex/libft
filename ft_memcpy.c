/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouzoub <mbouzoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 18:48:44 by mbouzoub          #+#    #+#             */
/*   Updated: 2026/11/09 16:45:10 by mbouzoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dst;
	const unsigned char	*sc;
	size_t				i;

	dst = (unsigned char *)dest;
	sc = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dst[i] = sc[i];
		i++;
	}
	return (dest);
}
