/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   room_helpers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbehm <bbehm@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 09:53:48 by bbehm             #+#    #+#             */
/*   Updated: 2020/10/31 11:10:35 by bbehm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

int	get_a_room(char *line, t_rooms *r_data)
{
	int		i;
	char	**coord;

	i = 0;
	if (*line == 'L')
		return (1);
	while (*line != ' ')
	{
		r_data->name[i] = *line;
		i++;
		line++;
	} 
	i++;
	if (!(coord = ft_strsplit(&line[i], ' ')))
		return (1);
	r_data->y = ft_atoi(coord[0]);
	r_data->x = ft_atoi(coord[1]);
	free_array(coord);
	return (0);
}

void	get_rooms(char *line)
{
	t_rooms *r_data;

	while (get_next_line(2, &line) > 0)
	{
		r_data = initialize_rooms();		
		if (ft_strstr((char*)line, "##start") || ft_strstr(line, "##end"))
		{
			if (ft_strstr((char*)line, "##start"))
				r_data->roomtype = 3;
			else
				r_data->roomtype = 1;
			ft_strdel(&line);
		}
		else
			r_data->roomtype = 2;	
		get_next_line(2, &line);
		if (line[0] != '#' && ft_strstr(line, " "))
		{
			if (get_room(line, r_data) == 1)
			{
				ft_putstr("ERROR");
				return (1);
			}
		}
		ft_strdel(&line);
	}
}
