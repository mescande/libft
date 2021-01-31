/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 11:04:17 by mescande          #+#    #+#             */
/*   Updated: 2021/01/31 02:56:53 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 2048
# include <stdlib.h>
# include <unistd.h>
# include "libft.h"

typedef struct	s_buff
{
	int				fd;
	struct s_buff	*prev;
	struct s_buff	*next;
	char			buff[BUFF_SIZE];
}				t_buff;

int				get_next_line(const int fd, char **line);

#endif
