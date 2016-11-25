/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 11:12:24 by dcaplain          #+#    #+#             */
/*   Updated: 2016/11/25 11:14:01 by dcaplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*sf;
	size_t	i;

	i = 0;
	sf = ft_strdup(s);
	if (sf == NULL)
		return (NULL);
	while (sf[i])
	{
		sf[i] = f(i, sf[i]);
		i++;
	}
	return (sf);
}
