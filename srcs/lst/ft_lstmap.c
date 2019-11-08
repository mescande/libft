/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 19:20:42 by mescande          #+#    #+#             */
/*   Updated: 2019/11/04 18:34:49 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *))
{
	t_list *res;

	if (lst == NULL)
		return (NULL);
	res = f(lst);
	if (lst->next != NULL)
		res->next = ft_lstmap(lst->next, f);
	return (res);
}
