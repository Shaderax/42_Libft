/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len_number.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrouzeva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 11:47:17 by nrouzeva          #+#    #+#             */
/*   Updated: 2016/11/10 11:50:23 by nrouzeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len_number(int n)
{
	int		len;
	long	l_nb;

	l_nb = n;
	len = 0;
	if (n < 0)
	{
		l_nb = -n;
		len++;
	}
	while (l_nb != l_nb % 10)
	{
		len++;
		l_nb = (l_nb - l_nb % 10) / 10;
	}
	len++;
	return (len);
}
