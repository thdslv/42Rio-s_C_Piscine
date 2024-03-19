#include "minilibx-linux/mlx.h"
#include <stdlib.h>

#define MALLOC_ERROR 1
#define WIDTH 400
#define HEIGTH 400

int main(void)
{
    void    *mlx_connection;
    void    *window1;
    void    *window2;

    mlx_connection = mlx_init();//connection to server
    if (mlx_connection == NULL)//safety measure
        return (MALLOC_ERROR);

    //creating window 1
    window1 = mlx_new_window(mlx_connection, WIDTH, HEIGTH, "Window 1");
    if (window1 == NULL)//safety measure
    {
        mlx_destroy_display(mlx_connection);
        free(mlx_connection);
        return (MALLOC_ERROR);
    }

    //creating window 2
    window2 = mlx_new_window(mlx_connection, WIDTH, HEIGTH, "Window 2");
    if (window2 == NULL)//safety measure
    {
        mlx_destroy_display(mlx_connection);
        free(mlx_connection);
        return (MALLOC_ERROR);
    }

    mlx_loop(mlx_connection);

    return (0);
}