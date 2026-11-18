/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouzoub <mbouzoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 15:57:21 by mbouzoub          #+#    #+#             */
/*   Updated: 2026/11/07 16:45:19 by mbouzoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len;
	size_t	slen;
	size_t	i;

	len = 0;
	slen = ft_strlen(src);
	while (len < size && dest[len])
		len++;
	if (len == size)
		return (size + slen);
	i = 0;
	while (src[i] && i < size - len - 1)
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (len + slen);
}
