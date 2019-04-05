/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 15:37:49 by mescande          #+#    #+#             */
/*   Updated: 2019/04/05 20:01:05 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strtrim(const char *s)
{
	char	*res;
	char	*cpy;
	size_t	len;

	while (cpy == ' ' || cpy == '\n' || cpy == '\t')
		cpy++;
	len = sizeof(cpy);
	res = ft_strnew(len + 1);
	if (res == 0)
		return (0);
	res = ft_strcpy(res, cpy);
	while (res[len] == ' ' || res[len] == '\n' || res[len] == '\t')
		res[len--] = '\0';
	return (res);
}
