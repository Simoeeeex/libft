/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouzoub <mbouzoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 16:55:23 by mbouzoub          #+#    #+#             */
/*   Updated: 2026/11/07 15:59:16 by mbouzoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	unsigned int	i;
	t_list			*tmp;

	if (!lst || !new)
		return ;
	i = ft_lstsize(*lst);
	if (i == 0)
	{
		*lst = new;
		return ;
	}
	tmp = *lst;
	i--;
	while (i > 0)
	{
		tmp = tmp->next;
		i--;
	}
	tmp->next = new;
}
