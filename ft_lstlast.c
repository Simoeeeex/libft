/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouzoub <mbouzoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 16:06:31 by mbouzoub          #+#    #+#             */
/*   Updated: 2026/11/07 16:42:04 by mbouzoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	unsigned int	j;
	unsigned int	i;

	i = ft_lstsize(lst);
	j = 0;
	if (i == 0)
		return (NULL);
	i--;
	while (j < i)
	{
		lst = lst->next;
		j++;
	}
	return (lst);
}
