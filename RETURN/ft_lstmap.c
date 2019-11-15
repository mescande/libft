/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 19:20:42 by mescande          #+#    #+#             */
/*   Updated: 2019/11/07 17:21:02 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *res;

	if (lst == NULL || !(res = ft_lstnew(f(lst->content))))
		return (NULL);
	if (lst->next != NULL)
	{
		res->next = ft_lstmap(lst->next, f, del);
		if (res->next == NULL)
		{
			ft_lstdelone(res, del);
			return (NULL);
		}
	}
	return (res);
}
