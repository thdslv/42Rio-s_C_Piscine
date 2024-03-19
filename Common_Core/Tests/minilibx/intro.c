#include <stdlib.h>
#include "minilibx-linux/mlx.h"

int main(void)//this code shows nothing. Lacks loop
{
    void    *mlx_ptr;//ptr to a xvar struct

    mlx_ptr = mlx_init();//func that returns xvar struct
    if (mlx_ptr == NULL)//safety measure
        return (1);
    mlx_destroy_display(mlx_ptr);//kills the disoplay
    free(mlx_ptr);//freeing memo after use
}