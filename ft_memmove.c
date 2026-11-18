/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouzoub <mbouzoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 18:48:58 by mbouzoub          #+#    #+#             */
/*   Updated: 2026/11/09 16:45:07 by mbouzoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dst;
	const unsigned char	*str;
	size_t				len;

	dst = (unsigned char *)dest;
	str = (const unsigned char *)src;
	len = 0;
	if (n == 0 || dest == src)
		return (dest);
	if (dst > str)
	{
		len = n;
		while (len > 0)
		{
			len--;
			dst[len] = str[len];
		}
	}
	else
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}
