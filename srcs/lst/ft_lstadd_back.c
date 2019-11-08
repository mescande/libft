/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 14:11:07 by mescande          #+#    #+#             */
/*   Updated: 2019/11/04 15:32:01 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstadd_back(t_list *alst, t_list *new)
{
	t_list *last;

	if (!new | !alst)
		return ;
	last = ft_lstlast(*alst);
	last.next = new;
	new.next = NULL;
	return ;
}
