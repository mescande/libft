/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 14:11:07 by mescande          #+#    #+#             */
/*   Updated: 2019/11/07 16:09:29 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **last, t_list *new)
{
	t_list	*tmp;

	if (!new || !last)
		return ;
	if (!(*last))
	{
		*last = new;
		return ;
	}
	tmp = ft_lstlast(*last);
	tmp->next = new;
	tmp->next->next = NULL;
	tmp->next->content = new->content;
	return ;
}
