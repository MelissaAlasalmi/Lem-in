#include "lem_in.h"

int main(void)
{
	t_lem	*lem;
	t_rooms *room;
	char	*line;

	line = NULL;
	lem = initialize_lem();
	room = initialize_rooms();
	get_next_line(2, &line);
		lem->ants = ft_atoi(line);
	ft_strdel(&line);
	while (get_next_line(2, &line) > 0)
	{
		if (ft_strstr(line, "##start"))
		{
			ft_strdel(&line);
			get_next_line(2, &line);
			if (get_room(line, room, 1) == 1)
			{
				ft_putstr("ERROR");
				return (1);
			}
		}
		else if (ft_strstr(line, "##end"))
		{
			ft_strdel(&line);
			get_next_line(2, &line);
			if (get_room(line, room, 3) == 1);
			{
				ft_putstr("ERROR");
				return (1);
			}
		}
		else if (line[0] != '#' && ft_strstr(line, " "))
		{
			if (get_room(line, room, 2) == 1);
			{
				ft_putstr("ERROR");
				return (1);
			}
		}
		ft_strdel(&line);
	}
	return (0);
}