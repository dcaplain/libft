/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_round_off.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 11:07:57 by dcaplain          #+#    #+#             */
/*   Updated: 2017/05/23 11:25:48 by dcaplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_round_off(double a)
{
	int		inf;
	int		sup;

	inf = (int)a;
	if (a >= 0)
		sup = inf + 1;
	else if (a < 0)
		sup = inf - 1;
	if ((a - inf) >= (sup - a))
		return (sup);
	else
		return (inf);
}
