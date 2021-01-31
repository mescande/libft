/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mescande <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 12:07:06 by mescande          #+#    #+#             */
/*   Updated: 2021/01/31 03:00:16 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		end_in_buff(char *buff, int res, int i)
{
	if (i == 1)
	{
		free(buff);
		return (res);
	}
	while (*buff)
	{
		if (*buff == '\n' || *buff == -1)
			return (1);
		buff++;
	}
	return (0);
}

int		returnvalue(char *buff, char **line)
{
	int		i;
	char	*tmp;
	char	*save;
	int		len;

	i = 0;
	if (!(tmp = (char *)ft_memalloc(BUFF_SIZE + 1)))
		return (end_in_buff(*line, -1, 1));
	while (buff[i] != '\n' && buff[i] != -1)
	{
		tmp[i] = buff[i];
		i++;
	}
	save = ft_strjoin(*line, tmp);
	free(tmp);
	free(*line);
	*line = save;
	if (buff[i] == -1 && i == 0)
		return (0);
	len = ft_strlen(buff);
	buff = ft_memmove((void *)(buff), (void *)((buff) + i + 1), len - i);
	ft_bzero(buff + len - i, (i + 1));
	return (1);
}

int		gestionstruct(t_buff *buff, int fd)
{
	ft_bzero(buff, sizeof(t_buff));
	buff->fd = fd;
	return (0);
}


int		get_next_line(const int fd, char **line)
{
	static t_buff	buff;
	char			*tmp;
	ssize_t			val;

	if ((val = 1) == 0 || !line || buff.fd != fd)
		if (!line || gestionstruct(&buff, fd))
			return (-1);
	*line = ft_strnew(1);
	while (val)
	{
		if (end_in_buff(buff.buff, 0, 0))
			return (returnvalue((buff.buff), line));
		else
		{
			tmp = ft_strjoin(*line, buff.buff);
			free(*line);
			*line = tmp;
			ft_bzero(buff.buff, BUFF_SIZE + 1);
			if ((val = read(fd, buff.buff, BUFF_SIZE)) == -1)
				return (end_in_buff(*line, -1, 1));
		}
	}
	if (line[0][0] == 0)
		return (0);
	return (1);
}
