/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 13:15:36 by dcaplain          #+#    #+#             */
/*   Updated: 2016/11/25 15:21:49 by dcaplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		ft_split(char const *s, char c)
{
	int		nb;

	nb = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			nb++;
			while (*s != '\0' && *s != c)
				s++;
			s--;
		}
		s++;
	}
	return (nb);
}

int		ft_char(char const *s, char c)
{
	int		nb;

	nb = 0;
	while (*s)
	{
		if (*s == c)
			nb++;
		s++;
	}
	return (nb);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		size;
	int		i;
	char	*cur;

	i = 0;
	cur = (char *)s;
	size = (ft_strlen(s) - ft_char(s, c) + ft_split(s, c));
	if ((tab = (char **)malloc(sizeof(*tab) * (size + 1))))
	{
		while (*cur != '\0')
		{
			if (*cur != c)
			{
				s = cur;
				tab[i] = ft_strsub(s, 0, cur - s);
				i++;
				while (*(cur + 1) != '\0' && *(cur + 1) != c)
					cur++;
			}
			cur++;
		}
		return (tab);
	}
	return (NULL);
}
