#include <stdlib.h>
#include "minilibx-linux/mlx.h"

#define MALLOC_ERROR 1
#define WIDTH 400
#define HEIGHT 400

int main(void)
{
    void    *mlx_connection;//connects with X11 server
    void    *mlx_window;//receives a ptr to a window

    mlx_connection = mlx_init();//connection stablished
    if (mlx_connection == NULL)
        return (MALLOC_ERROR);

    mlx_window = mlx_new_window(mlx_connection, HEIGHT, WIDTH, "My window");
    if (mlx_window == NULL)//safety measure
    {
        mlx_destroy_display(mlx_connection);
        free(mlx_connection);
        return (MALLOC_ERROR);
    }

    //without a loop the process stops
    mlx_loop(mlx_connection);

    //cleaning is never reached
    mlx_destroy_window(mlx_connection, mlx_window);
    mlx_destroy_display(mlx_connection);
    free(mlx_connection);
}