/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_move.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 19:01:51 by thda-sil          #+#    #+#             */
/*   Updated: 2024/03/19 19:01:52 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/so_long.h"

void    move_up(t_game *game)
{
    game->player.direction = 'U';
    if (game->map[game->player.y - 1][game->player.x] != '1')
    {
        if (game->map[game->player.y - 1][game->player.x] == 'E'
                && game-> collectible.amount != 0)
                return ;
        game->map[game->player.y][game->player.x] = '0';
        game->player.y -= 1;
        if (game->map[game->player.y][game->player.x]  == 'C')
            game->collectible.amount--;
        else if ((game->map[game->player.y][game->player.x] == 'E'
                && game->collectible.amount == 0) ||
                game->map[game->player.y][game->player.x] == 'V')
                close_hook(game);
        game->map[game->player.y][game->player.x] = 'P';
        game->move_count++;
        ft_printf("Move count: %d\r", game->move_count);
        render_map(game);        
    }
}