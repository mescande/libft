/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrealloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 12:59:20 by mescande          #+#    #+#             */
/*   Updated: 2021/01/15 15:42:33 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memrealloc(void *buff, size_t end, size_t init)
{
	char	*res;

	if (!(res = malloc(end)))
		return (NULL);
	res = ft_memcpy(res, buff, init);
	ft_bzero(res + init, ((long)(end - init) < 0 ? 0 : end - init));
	free(buff);
	return (res);
}
