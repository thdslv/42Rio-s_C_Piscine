/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_renderization.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:55:06 by thda-sil          #+#    #+#             */
/*   Updated: 2024/03/19 16:55:08 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/so_long.h"

void    render_map_texts(t_game *game)
{
    char    *str;
    char    *number;

    number = ft_itoa(game->move_count);
    str = ft_strjoin("Moves: ", number);
    mlx_string_put(game->connection, game->window, 18, 18, 0x00FFFFFF, str);
    free(str);
    free(number);
}

void    render_player(t_game *game)
{
    if (game->player.direction == 'U')
        put_image(game, game->player.up_view, game->player.x, game->player.y);
    else if (game->player.direction == 'D')
        put_image(game, game->player.down_view, game->player.x, game->player.y);
    else if (game->player.direction == 'L')
        put_image(game, game->player.left_view, game->player.x, game->player.y);
    else
        put_image(game, game->player.right_view, game->player.x, game->player.y);
}

void    render_exit(t_game *game, int x, int y)
{
    if (game->collectable.amount == 0 && game->exit_possible == 0)
    {
        put_image(game, game->exit.frame, x, y);//FRAMES
        ft_sleep(2);
        //repeat for frames
        game->exit_possible = 1;
    }
    else if (game->collectable.amount == 0 && game->exit_possible == 1)
        put_image(game, game->exit.frame, x , y);//last frame
    else
        put_image(game, game->exit.image, x, y);
}

void    render_map(t_game *game)
{
    int x;
    int y;

    x = -1;
    y = -1;
    while (game->map[++x])
    {
        while (game->map[y][++x])
        {
            if (game->map[y][x] == '1')
                put_image(game, game->wall_image, x, y);
            else if (game->map[y][x] == 'C')
                put_image(game, game->collectable.image, x, y);
            else if (game->map[y][x] == 'P')
                render_player(game);
            else if (game->map[y][x] == 'E')
                render_exit(game, x, y);
            else if (game->map[y][x] == 'V')
                put_image(game, game->villain.image, x, y);
            else
                put_image(game, game->floor_image, x, y);
        }
    }
    render_map_texts(game);
}