/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   room_helpers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbehm <bbehm@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 09:53:48 by bbehm             #+#    #+#             */
/*   Updated: 2020/10/31 12:01:36 by bbehm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

static int		get_a_room(char *line, t_room *r_data)
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

static int		check_room(char *line, t_room *r_data)
{
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
		if (get_a_room(line, r_data) == 1)
		{
			ft_putstr("ERROR");
			return (1);
		}
	}
	return (0);
}

int				get_rooms(char *line, t_room *r_data)
{
	t_room *new_room;
	t_room *temp;
	
	temp = r_data;
	// this should add the links between the rooms
	if (r_data->name != NULL)
	{
		new_room = initialize_room();
		r_data->next = new_room;
		r_data = new_room;
		r_data->prev = temp;	

	}
	while (get_next_line(2, &line) > 0)
	{
		if (check_room(line, r_data) == 1)
			return (1);
		ft_strdel(&line);
	}
	return (0);
}
