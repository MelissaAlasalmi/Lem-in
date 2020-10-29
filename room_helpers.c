#include "lem-in.h"

int	get_room(char *line, t_rooms *r_data, int type)
{
	int i;
	char **coord;

	i = 0;
	r_data->roomtype = type;
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
	free(coord[0]);
	free(coord[1]);
	free(coord);
	return(0);
}