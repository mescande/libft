/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 14:15:50 by mescande          #+#    #+#             */
/*   Updated: 2019/04/05 14:17:03 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strdel(char **as)
{
	free(*as);
	*as = 0;
	return ;
}
