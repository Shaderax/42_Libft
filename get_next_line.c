/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrouzeva <nrouzeva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 15:58:11 by nrouzeva          #+#    #+#             */
/*   Updated: 2017/01/13 22:11:20 by nrouzeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

t_fd	*ft_fd_manager(t_fd **list, int fd)
{
	while (*list && (*list)->fd != fd)
	{
		if (fd == (*list)->fd)
			return (*list);
		list = &(*list)->next;
	}
	if (!(*list))
	{
		*list = malloc(sizeof(**list));
		(*list)->fd = fd;
		(*list)->next = NULL;
		(*list)->res = NULL;
	}
	return (*list);
}

int		funct(char **buf, char **line, t_fd *cur)
{
	char	*tmp;

	if (cur->res)
	{
		if ((tmp = ft_strchr(cur->res, '\n')))
		{
			*line = ft_strjfri(*line, ft_strsub(cur->res, 0, tmp -
						cur->res), 3);
			cur->res = ft_strdup(cur->res + (tmp - cur->res) + 1);
			return (1);
		}
		else if ((*line = ft_strjfri(*line, cur->res, 1)))
			ft_strdel(&(cur->res));
	}
	if ((tmp = ft_strchr(*buf, '\n')))
	{
		*line = ft_strjfri(*line, ft_strsub(*buf, 0, tmp - *buf), 3);
		cur->res = ft_strdup(*buf + (tmp - *buf) + 1);
		ft_strdel(buf);
		return (1);
	}
	else
		*line = ft_strjfri(*line, *buf, 1);
	return (0);
}

int		get_next_line(int const fd, char **line)
{
	static t_fd		*list = NULL;
	t_fd			*fd_cur;
	int				ret;
	char			*buf;

	if (!line || fd < 0)
		return (-1);
	if (*line)
		*line = NULL;
	*line = ft_strdup("");
	fd_cur = ft_fd_manager(&list, fd);
	while ((buf = malloc(sizeof(char) * (BUFF_SIZE + 1))) && (fd_cur->res
				|| (ret = read(fd_cur->fd, buf, BUFF_SIZE))))
	{
		if (ret == -1)
			return (-1);
		if (!fd_cur->res)
			buf[ret] = '\0';
		if (funct(&buf, line, fd_cur))
			return (1);
		ft_strdel(&buf);
	}
	if (ret == 0 && **line == '\0')
		return (0);
	return (1);
}
