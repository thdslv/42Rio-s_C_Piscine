/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:07:20 by thda-sil          #+#    #+#             */
/*   Updated: 2024/03/12 15:07:21 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# include "../../libraries/libft/includes/libft.h"
# include "../../libraries/minilibx-linux/mlx.h"
# include "structs.h"
# include "constants.h"

// UTILS
void	ft_sleep(int seconds);
/*void	map_error(int error_code);
void	ft_putmatrix(char **matrix);
char	*ft_strjoin_free(char *s1, char *s2, int free_str);
int		ft_free_matrix(char **matrix);
size_t	ft_matrix_len(char **matrix);
int		error(void);
*/
// HOOKS
void	free_game(t_game *game, int freelib);
int		close_hook(t_game *game);
int		key_hook(int keycode, t_game *game);

// IMAGE HANDLER
void	load_image(t_game *game, void **image, char *path);
int		load_images(t_game *game);
void	put_image(t_game *game, void *image, int x, int y);

// PLAYER MOVEMENT
void	move_up(t_game *game);
void	move_down(t_game *game);
void	move_left(t_game *game);
void	move_right(t_game *game);
void	atack_enemy(t_game *game);

// MAP VALIDATIONS
int		validade_extension(char *map_path);
int		validate_map(char *map, t_game *game);

// MAP PARSER
void	get_map_dimensions(char **map_str, t_game *game);
int		check_map(char *map_path, t_game *game);
void	render_map(t_game *game);

#endif