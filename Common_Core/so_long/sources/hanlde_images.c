/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hanlde_images.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:09:33 by thda-sil          #+#    #+#             */
/*   Updated: 2024/03/19 15:09:36 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/so_long.h"

void    load_image(t_game *game, void **image, char *path)
{
    int width;
    int height;

    if (image)
        *image = mlx_xpm_file_to_image(game->connection, path, &width, &height);
}

void put_image(t_game *game, void *image, int x, int y)
{
    mlx_put_image_to_window(game->connection, game->window, image,
            x * BLOCK_SIZE, y * BLOCK_SIZE);
    mlx_do_sync(game->connection);
}

int load_images(t_game *game)
{
    load_image(game, &game->IMAGE, PATH);
    return (1);
}