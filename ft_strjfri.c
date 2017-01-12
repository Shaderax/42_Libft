/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrouzeva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 14:25:46 by nrouzeva          #+#    #+#             */
/*   Updated: 2017/01/12 16:25:05 by nrouzeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjfri(char const *s1, char const *s2, int opt)
{
	char *str;

	str = NULL;
	if (s1 && s2 && opt)
	{
		if (!(str = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1)))
			return (NULL);
		str = ft_strcpy(str, s1);
		str = ft_strcat(str, s2);
		if (opt == 1)
			free(&s1);
		if (opt == 2)
			free(&s2);
		if (opt == 3)
		{
			free(&s1);
			free(&s2);
		}
	}
	return (str);
}
