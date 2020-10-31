/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_in.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbehm <bbehm@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 12:33:23 by malasalm          #+#    #+#             */
/*   Updated: 2020/10/30 10:08:20 by bbehm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEM_IN_H
# define LEM_IN_H
# include "libft/libft.h"

typedef struct	s_lem
{
	int ants;
}				t_lem;

typedef struct	s_rooms
{
	char		*name;
	int			y;
	int			x;
	int			roomtype; //1=start, 2=normal, 3=end
	t_rooms		*prev;
	t_rooms		*next;
}				t_rooms;

t_lem		*initialize_lem(void);
t_rooms		*initialize_rooms(void);
int			get_a_room(char *line, t_rooms *r_data);
void		free_array(char **array);
void		get_rooms(char *line);

#endif