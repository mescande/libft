/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrealloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 12:59:20 by mescande          #+#    #+#             */
/*   Updated: 2019/06/03 12:41:58 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memrealloc(void *buff, size_t end, size_t init)
{
	char	*res;
	int		i;

	if (!(res = malloc(end)))
		return (NULL);
	i = -1;
	res = ft_memcpy(res, buff, init);
	ft_bzero(res + i, ((long)(end - init) < 0 ? 0 : end - init));
	free(buff);
	return (res);
}
