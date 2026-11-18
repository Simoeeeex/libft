/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouzoub <mbouzoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 23:40:38 by mbouzoub          #+#    #+#             */
/*   Updated: 2026/11/07 16:02:55 by mbouzoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	iputnbr(long nb, int i, char *p)
{
	if (nb >= 10)
		i = iputnbr(nb / 10, i, p);
	p[i] = nb % 10 + '0';
	return (i + 1);
}

static int	length(long nb)
{
	int	i;

	i = 0;
	while (nb >= 10)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	long	nb;
	int		t;
	char	*p;

	i = 1;
	nb = n;
	t = 0;
	if (nb < 0)
	{
		nb = -nb;
		t = 1;
	}
	i = i + length(nb);
	p = malloc(sizeof(char) * (i + 1 + t));
	if (p == NULL)
		return (NULL);
	i = 0;
	if (t == 1)
	{
		p[i++] = '-';
	}
	i = iputnbr(nb, i, p);
	p[i] = '\0';
	return (p);
}
