/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 10:12:15 by dcaplain          #+#    #+#             */
/*   Updated: 2016/11/24 10:21:28 by dcaplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*str2;

	str2 = (char *)str;
	while (*str2 && *str2 != (char)c && n--)
		str2++;
	if (*str2 == (char)c)
		return (str2);
	else
		return (NULL);
}
