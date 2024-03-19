/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   close.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 18:34:27 by thda-sil          #+#    #+#             */
/*   Updated: 2024/03/19 18:35:54 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	free_images(t_game *game)
{
	mlx_destroy_image(game->connection, game->floor_image);
	mlx_destroy_image(game->connection, game->wall_image);
	mlx_destroy_image(game->connection, game->collectible.image);
	mlx_destroy_image(game->connection, game->player.up_view);
	mlx_destroy_image(game->connection, game->player.down_view);
	mlx_destroy_image(game->connection, game->player.left_view);
	mlx_destroy_image(game->connection, game->player.right_view);
	mlx_destroy_image(game->connection, game->villain.image);
	mlx_destroy_image(game->connection, game->exit.image);
	/*mlx_destroy_image(game->connection, game->exit.frame_1);
	mlx_destroy_image(game->connection, game->exit.frame_2);
	mlx_destroy_image(game->connection, game->exit.frame_3);
	mlx_destroy_image(game->connection, game->exit.frame_4);
	mlx_destroy_image(game->connection, game->exit.frame_5);
	mlx_destroy_image(game->connection, game->exit.frame_6);
	mlx_destroy_image(game->connection, game->exit.frame_7);
	mlx_destroy_image(game->connection, game->exit.frame_9);
	mlx_destroy_image(game->connection, game->exit.frame_10);*/
}

void    free_minilibx(t_game *game)
{
    free_images(game);
    mlx_destroy_window(game->connection, game->window);
    mlx_destroy_display(game->connection);
    free(game->connection);
}

void    free_game(t_game *game, int free_lib)
{
    ft_free_matrix(game->map);
    if (free_lib)
        free_minilibx(game);
}

int close_hook(t_game *game)
{
    free_game(game, 1);
    exit(0);
}