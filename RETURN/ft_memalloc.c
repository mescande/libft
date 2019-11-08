/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 13:34:57 by mescande          #+#    #+#             */
/*   Updated: 2019/11/06 16:30:17 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	char	*res;

	res = malloc(size);
	if (res == NULL)
		return (res);
	while (--size != 0)
		res[size] = 0;
	res[0] = 0;
	return ((void *)res);
}
