/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 18:16:03 by thda-sil          #+#    #+#             */
/*   Updated: 2024/03/19 18:16:04 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int key_hook(int keycode, t_game *game)
{
    if ( keycode == ESC)
        close_hook(game);
    else if (keycode == W || keycode == UP)
        
    return (0);
}