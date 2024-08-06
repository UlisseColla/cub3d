/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucolla <ucolla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 16:07:03 by ucolla            #+#    #+#             */
/*   Updated: 2024/08/06 16:07:05 by ucolla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	ft_error(char *str)
{
	ft_printf(2, "Error\n%s\n", str);
	exit(1);
}

void	ft_free_struct(t_map *map)
{
	if (map->no.path != NULL)
		free(map->no.path);
	if (map->so.path != NULL)
		free(map->so.path);
	if (map->we.path != NULL)
		free(map->we.path);
	if (map->ea.path != NULL)
		free(map->ea.path);
	if (map->door.path != NULL)
		free(map->door.path);
	if (map->map != NULL)
		ft_free_matrix(map->map);
}