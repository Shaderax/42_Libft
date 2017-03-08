/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrouzeva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 12:07:21 by nrouzeva          #+#    #+#             */
/*   Updated: 2017/02/14 13:34:18 by nrouzeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void	*ptr;

	if ((ptr = (void *)malloc(size)) && size)
	{
		ft_memset(ptr, '\0', size);
		return (ptr);
	}
	else
	{
		ft_putstr_fd("Malloc Problem #fail lol", 2);
		exit(1);
	}
	return (ptr);
}
