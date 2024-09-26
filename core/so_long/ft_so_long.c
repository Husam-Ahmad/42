/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_so_long.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 11:45:18 by huahmad           #+#    #+#             */
/*   Updated: 2024/09/20 17:26:46 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/so_long.h"
#include "MLX42/include/MLX42/MLX42.h"
#define BPP sizeof(int32_t)
#define WIDTH 256
#define HEIGHT 256

mlx_image_t* to_image;

static void error(void)
{
	puts(mlx_strerror(mlx_errno));
	exit(EXIT_FAILURE);
}

void my_keyhook(mlx_key_data_t keydata, void *param)
{

	(void) param;
	if (keydata.key == MLX_KEY_W && keydata.action == MLX_PRESS )
	{
		puts("UP");
		to_image->instances[0].y -= 32;
		game.py -= 1;
	}
	if (keydata.key == MLX_KEY_A && keydata.action == MLX_PRESS)
	{
		puts("LEFT");
		to_image->instances[0].x -= 32;
	}
	if (keydata.key == MLX_KEY_S && keydata.action == MLX_PRESS)
	{
		puts("DOWN");
		to_image->instances[0].y += 32;
		game.py += 1;
	}
	if (keydata.key == MLX_KEY_D && keydata.action == MLX_PRESS)
	{
		puts("RIGHT");
		to_image->instances[0].x += 32;
	}
	// if (keydata.key == MLX_KEY_ESCAPE && keydata.action == MLX_PRESS)
	// 	mlx_close_window();
}

// void	makeground(char *s, mlx_t *t, map_t map)
// {
// 	int	x;
// 	int	y;

// 	x = 0;
// 	y = 0;
// 	while (map->s[y])
// 	{
// 		while (s[i] == '1')
// 		{
// 			xpm_t* background_texture = mlx_load_xpm42("./imgs/wall.xpm42"); //1
// 			if (!background_texture)
// 				error();
// 			mlx_image_t* background_img = mlx_texture_to_image(t, &background_texture->texture); //2
// 			if (!background_img)
// 				error();
// 			if (mlx_image_to_window(t, background_img, w, h) < 0) //3
// 				error();
// 			w += 32;
// 		}
// 	}
// }

// void	makemap(char *s, mlx_t *t)
// {
// 	makeground(char *s, mlx_t *t);
// 	makewalls(char *s, mlx_t *t);
// 	makeplayer(char *s, mlx_t *t);
// 	makesticks(char *s, mlx_t *t);
// 	// makedoor(char *s, mlx_t *t);
// }

void	delete(char *s, mlx_t *t)
{
	int	i;
	int	x;
	int	y;

	y = 0;
	x = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == '1')
		{
			xpm_t* background_texture = mlx_load_xpm42("./imgs/wall.xpm42"); //1
			if (!background_texture)
				error();
			mlx_image_t* background_img = mlx_texture_to_image(t, &background_texture->texture); //2
			if (!background_img)
				error();
			if (mlx_image_to_window(t, background_img, x, y) < 0) //3
				error();
			x += 32;
		}
		else if (s[i] == '0' || s[i] == 'P' || s[i] == 'C')
		{
			xpm_t* ground_texture = mlx_load_xpm42("./imgs/ground.xpm42"); //1
			if (!ground_texture)
				error();
			mlx_image_t* ground_img = mlx_texture_to_image(t, &ground_texture->texture); //2
			if (!ground_img)
				error();
			if (mlx_image_to_window(t, ground_img, x, y) < 0) //3
				error();
			x += 32;
		}
		else if (s[i] == 'P')
			x += 32;
		else if (s[i] == 'C')
			x += 32;
		else if (s[i] == '\n')
		{
			y += 32;
			x = 0;
		}
		i++;
		if (s[i] == 0)
			break ;
	}
	i = 0;
	y = 0;
	// x = 0;
	while (s[i])
	{
		if (s[i] == 'P')
		{
			xpm_t*	xpm_thing = mlx_load_xpm42("./imgs/player.xpm42"); // 1
			to_image = mlx_texture_to_image(t, &xpm_thing->texture); // 2
			if(mlx_image_to_window(t, to_image, x, y) < 0) //3
				error();
			game.py = y;
			game.px = x;
			x += 32;
		}
		else if (s[i] == 'C')
		{
			xpm_t* collectible1 = mlx_load_xpm42("./imgs/collectible1.xpm42"); //1
			if (!collectible1)
				error();
			mlx_image_t* collectible1_img = mlx_texture_to_image(t, &collectible1->texture); //2
			if (!collectible1_img)
				error();
			if (mlx_image_to_window(t, collectible1_img, x, y) < 0) //3
				error();
			x += 32;
		}
		else if (s[i] == '1')
			x += 32;
		else if (s[i] == '0')
			x += 32;
		else if (s[i] == '\n')
		{
			y += 32;
			x = 0;
		}
		game.w += 1;
		i++;
	}
}

int	main(int argc, char **argv)
{
	mlx_t*	mlx;
	int	i;
	char	*left, *buffer, *mapling;

	buffer = NULL;
	mlx = mlx_init(WIDTH, HEIGHT, "MLX42", true);
	if (!mlx)
		error();

	(void)argc;
	i = open(argv[1], O_RDONLY);
	left = ft_strdup("");
	while (1)
	{
		mapling = get_next_line(i);
		if (mapling)
		{
			buffer = left;
			left = ft_strjoin(left, mapling);
			free(buffer);
			free(mapling);
		}
		else
			break ;
		game.h += 1;
	}
	close(i);
	delete(left, mlx);
	printf("%s\n", left);
	printf("%d\n", game.h);
	printf("%d\n", game.w / game.h);





	mlx_key_hook(mlx, (mlx_keyfunc)my_keyhook, NULL);
	mlx_loop(mlx);
	// mlx_delete_texture(background_texture);
	mlx_terminate(mlx);

	return (EXIT_SUCCESS);
}
