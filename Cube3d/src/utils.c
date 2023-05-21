/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndir <mndir@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 20:49:01 by mndir             #+#    #+#             */
/*   Updated: 2023/05/21 19:04:32 by mndir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cube3d.h"

int	ft_exit(void)
{
	exit(1);
	return (1);
}

int	windows(void)
{
	void	*ml;
	void	*mlx_windows;

	ml = mlx_init();
	mlx_windows = mlx_new_window(ml, LARGEURE, LONGEURE, "Cube3d");
	mlx_hook(mlx_windows, 17, 0, ft_exit, NULL);
	mlx_loop(ml);

	free (ml);
	return (1);
}