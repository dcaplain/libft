/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 20:57:34 by dcaplain          #+#    #+#             */
/*   Updated: 2017/05/23 11:37:30 by dcaplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "minilibx/mlx.h"

static void	draw_vertical_line(t_point A, t_point B, void *id, void *win_id)
{
	int		tmp;

	if (A.x != B.x)
		return ;
	if (A.y > B.y)
	{
		tmp = A.y;
		A.y = B.y;
		B.y = tmp;
	}
	while (A.y < B.y)
	{
		mlx_pixel_put(id, win_id, A.x, A.y, 0xFFFFFF);
		A.y++;
	}
}

void		draw_line(t_point A, t_point B, void *id, void *win_id)
{
	double		a;
	double		b;

	if (A.x == B.x)
		draw_vertical_line(A, B, id, win_id);
	else
	{
		a = (A.y - B.y) / (A.x - B.x);
		b = A.y - A.x * a;
		while (A.x != B.x && A.y != B.y)
		{
			mlx_pixel_put(id, win_id, A.x, A.y, 0xFFFFFF);
			if (a <= 1 && a >= -1)
			{
				A.x++;
				A.y = ft_round_off(a * A.x + b);
			}
			else
			{
				A.y++;
				A.x = (A.y / a) - b;
			}
		}
	}
}
