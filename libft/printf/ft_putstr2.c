/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrouzeva <nrouzeva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/03 03:20:40 by nrouzeva          #+#    #+#             */
/*   Updated: 2017/02/03 03:20:41 by nrouzeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_putstr2(char *s, int i)
{
	int j;

	j = 0;
	s[i] = '\0';
	while (s[j])
	{
		if (s[j] == -1)
			s[j] = '\0';
		j++;
	}
	write(1, s, j);
	return (0);
}
