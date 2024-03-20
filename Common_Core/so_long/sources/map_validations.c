/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_validations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 17:05:33 by thda-sil          #+#    #+#             */
/*   Updated: 2024/03/20 17:05:35 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/so_long.h"

int validate_extention(char *map_path)
{
    if (ft_strnstr(map_path + ft_strlen(map_path) - 4, ".ber", 4))
        return (1);
    return (0);
}
static void validate_map_walls(char **map_str, int *wall_error)
{
    size_t  i;
    size_t  j;

    i = 0;
    while (map_str[i])
    {
        j = 0;
        while (map_str[i][j])
        {
            if ((i == 0) || (i == ft_matrix_len(map_str) - 1))
            {
                if (map_str[i][j] != '1')
                    *wall_error = 1;
            }
            else if ((j == 0) || (j == (ft_strlen(map_str[i]) - 1)))
            {
                if (map_str[i][j] != '1')
                    *wall_error = 1;
            }
            j++;                        
        }
        i++;
    }
}

int validate_map(char *map, t_game *game)
{
    char    **map_str;
    int     error_code;

    map_str = ft_split(map, '\n');
    if (!map_str)
        return (0);
    
}