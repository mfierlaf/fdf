#include "./minilibx_macos/mlx.h"

int main()
{
	void	*mlx_ptr;
	void	*win_ptr;

	mlx_ptr = mlx_init();
	win_ptr = mlx_new_window(mlx_ptr, 500, 500, "test");
	mlx_pixel_put(mlx_ptr, win_ptr, 250, 250, 0xFF0000);
	mlx_pixel_put(mlx_ptr, win_ptr, 250, 251, 0xFF0000);
	mlx_pixel_put(mlx_ptr, win_ptr, 250, 252, 0xFF0000);
	mlx_pixel_put(mlx_ptr, win_ptr, 251, 250, 0xFF0000);
	mlx_pixel_put(mlx_ptr, win_ptr, 252, 250, 0xFF0000);
	mlx_pixel_put(mlx_ptr, win_ptr, 251, 251, 0xFF0000);
	mlx_pixel_put(mlx_ptr, win_ptr, 251, 252, 0xFF0000);
	mlx_pixel_put(mlx_ptr, win_ptr, 252, 251, 0xFF0000);
	mlx_pixel_put(mlx_ptr, win_ptr, 252, 252, 0xFF0000);
	mlx_loop(mlx_ptr);
	return 0;
}
