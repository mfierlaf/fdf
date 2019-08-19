/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfierlaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 14:08:51 by mfierlaf          #+#    #+#             */
/*   Updated: 2019/08/19 18:02:16 by mfierlaf         ###   ########.fr       */
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

typedef struct	s_file;
{
	int x;
	int y;
	char *high;
}				t_file;

#endif
