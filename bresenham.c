/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bresenham.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfierlaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 13:58:25 by mfierlaf          #+#    #+#             */
/*   Updated: 2019/08/19 14:47:50 by mfierlaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void line(int x0, int y0, int x1, int y1) 
{
	t_brsh brsh;

	if ((brsh = malloc(sizeof(t_brsh)) == NULL))
		return (void*0);
	brsh->dx = abs(x1 - x0);
	brsh->sx = x0 < x1 ? 1 : -1;
	brsh->dy = abs( y1 - y0);
	brsh->sy = y0 < y1 ? 1 : -1;
	brsh->err = ( dx > dy ? dx : -dy) / 2;
	while (1)
	{
		setPixel(x0 ,y0);
		if (x0 == x1 && y0 == y1) break;
		brsh->e2 = brsh->err;
		if (brsh->e2 > -brsh->dx) 
		{ 
			brsh->err -= brsh->dy;
			x0 += brsh->sx;
		}
		if (brsh->e2 < brsh->dy)
		{ 
			brsh->err += brsh->dx;
			y0 += brsh->sy;
		}
	}
}
