#include "lem_in.h"

t_lem		*initialize_lem(void)
{
	t_lem *lem;

	if (!(lem = (t_lem *)malloc(sizeof(t_lem))))
		return (NULL);
	lem->ants = 0;
	return (lem);
}

t_rooms		*initialize_rooms(void)
{
	t_rooms *room;

	if (!(room = (t_rooms *)malloc(sizeof(t_rooms))))
		return (NULL);
	room->name = NULL;
	room->y = 0;
	room->x = 0;
	room->roomtype = 0;
	room->prev = NULL;
	room->next = NULL;
	return (room);
}