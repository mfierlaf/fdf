#include "./minilibx_macos/mlx.h"

int main()
{
	void	*mlx_ptr;
	void	*win_ptr;
	int cpt;

	cpt = 0;
	mlx_ptr = mlx_init();
	win_ptr = mlx_new_window(mlx_ptr, 500, 500, "test");
	while (cpt < 12)
	{
		mlx_pixel_put(mlx_ptr, win_ptr, cpt, 0, 0xFF0000);
		mlx_pixel_put(mlx_ptr, win_ptr, cpt, 1, 0xFF0000);
		mlx_pixel_put(mlx_ptr, win_ptr, cpt, 2, 0xFF0000);
		mlx_pixel_put(mlx_ptr, win_ptr, cpt + 1, 0, 0xFF0000);
		mlx_pixel_put(mlx_ptr, win_ptr, cpt + 2, 0, 0xFF0000);
		mlx_pixel_put(mlx_ptr, win_ptr, cpt + 1, 1, 0xFF0000);
		mlx_pixel_put(mlx_ptr, win_ptr, cpt + 1, 2, 0xFF0000);
		mlx_pixel_put(mlx_ptr, win_ptr, cpt + 2, 1, 0xFF0000);
		mlx_pixel_put(mlx_ptr, win_ptr, cpt + 2, 2, 0xFF0000);
		cpt = cpt + 3;
	}
	mlx_loop(mlx_ptr);
	return 0;
}
