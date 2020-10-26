/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 16:09:14 by mescande          #+#    #+#             */
/*   Updated: 2020/10/26 16:15:56 by mescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int		printme(int fd, t_plist *start)
{
	int		res;
	int 	trash;
	t_plist	*tmp;

	(void) trash;
	res = 0;
	while (start)
	{
		trash = write(fd, start->str, start->len);
		res += start->len;
		tmp = start;
		start = start->next;
		free(tmp->str);
		free(tmp);
	}
	return (res);
}

int		ft_fprintf(int fd, const char *str, ...)
{
	t_plist	*lst;
	t_plist	*start;
	int		i;
	va_list	args;

	if (!(lst = newelem()))
		return (0);
	start = lst;
	i = 0;
	va_start(args, str);
	while (str[i])
	{
		while (str[i] && str[i] != '%')
			lst = addchar(lst, str[i++]);
		if (str[i])
		{
			if (!(i = workonstr(str, i, args, &lst)))
				return (0);
			if (lst->next)
				lst = lst->next;
		}
	}
	va_end(args);
	return (printme(fd, start));
}
