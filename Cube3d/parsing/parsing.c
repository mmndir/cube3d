/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndir <mndir@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 23:02:16 by mndir             #+#    #+#             */
/*   Updated: 2023/05/21 19:34:47 by mndir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cube3d.h"

int	check_map(char *av)
{
	int	fd;

	fd = open(av, O_RDONLY);
	if (fd < 0)
	{
		printf("EMPTY MAP\n");
		exit (0);
	}

}

int	check_arg_and_ext(int ac, char *av)
{
	int		i;
	int		j;
	char	*cub;

	i = 0;
	j = 3;
	cub = ".cub";
	if (ac != 2)
	{
		printf("ERROR INVALID ARG\n");
		exit (0);
	}
	if (ac == 2)
	{
		if (ft_strlen(av) <= 4)
		{
			printf("ERROR INVALID MAP\n");
			exit (0);
		}
		while (av[i])
			i++;
		i--;
		while (j >= 0)
		{
			if (cub[j] != av[i])
			{
				printf("ERROR INVALID MAP\n");
				exit (0);
			}
			i--;
			j--;
		}
	}
	return (1);
}
