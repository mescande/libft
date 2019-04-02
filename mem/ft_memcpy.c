/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 17:37:42 by mescande          #+#    #+#             */
/*   Updated: 2019/04/02 17:40:49 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*memcpy(void *restrict dst, const void * restrict src, size_t n)
{
	while (--n >= 0)
		dst[n] = src[n];
	return (dst);
}
