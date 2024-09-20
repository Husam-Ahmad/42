/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 11:34:29 by huahmad           #+#    #+#             */
/*   Updated: 2024/09/17 17:52:56 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H

# define SO_LONG_H

#define WIDTH 256
#define HEIGHT 256

// INCLUDES

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>
# include <stdarg.h>
# include <fcntl.h>
# include <string.h>
# include <stdbool.h>
# include <math.h>
# include </nfs/homes/huahmad/core/so_long/needed/libft/libft.h>

// #include "needed/libft/libft.h"
#include <X11/X.h>
#include <X11/keysym.h>
// #define BPP sizeof(int32_t)

typedef struct map_s
{
	char	**s;		//map saved in array
	int		w;			//width of map
	int		h;			//height of map
	int		p;			//player status 1-alive, 0 dead
	int		px;			//player position on map the x axis
	int		py;			//player position on map the y axis
						//add player direction?
	int		ct;			//total number of collectibles
	int		cr;			//number of remaining collectibles
	int		*c;			//collectible status
	int		*cx;		//collectible position on the x axis
	int		*cy;		//collectible position on the y axis
	int		et;			//total number of enemies
						//add enemy remaining?
	int		*e;			//array of enemies 0 dead, 1 alive
	int		*ex;		//enemy position on map the x axis
	int		*ey;		//enemy position on map the y axis
						//add enemy direction?
	int		x;			// exit status 0 closed, 1 open
	int		xx;			// exit X
	int		xy;			// exit Y
	int		steps;		// number of steps player did
} map_t;


#endif
