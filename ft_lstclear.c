/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouzoub <mbouzoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 17:42:59 by mbouzoub          #+#    #+#             */
/*   Updated: 2026/11/07 16:39:24 by mbouzoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*x;

	if (!lst || !del)
		return ;
	tmp = *lst;
	while (tmp != NULL)
	{
		x = tmp->next;
		ft_lstdelone(tmp, del);
		tmp = x;
	}
	*lst = NULL;
}
