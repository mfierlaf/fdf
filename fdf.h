/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfierlaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 14:08:51 by mfierlaf          #+#    #+#             */
/*   Updated: 2019/08/19 16:48:47 by mfierlaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# include "libft/libft.h"
# include "get_next_line/get_next_line.h"

typedef struct	s_brsh;
{
	int dx;
	int sx;
	int dy;
	int sy;
	int err;
	int e2;
}				t_brsh;

typedef struct	s_point;
{
	int x;
	int y;
	int val;
	t_point *next;
}				t_point;

typedef struct	s_list;
{
	t_list *first;
}				t_list;

#endif
