/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_in.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbehm <bbehm@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 12:33:23 by malasalm          #+#    #+#             */
/*   Updated: 2020/10/31 11:53:21 by bbehm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEM_IN_H
# define LEM_IN_H
# include "../libft/libft.h"
# include <stdlib.h>

typedef struct			s_room
{
	char				*name;
	int					y;
	int					x;
	int					roomtype; //1=start, 2=normal, 3=end
	struct s_room		*prev;
	struct s_room		*next;
}						t_room;

typedef struct		s_lem
{
	int 			ants;
	struct s_room	*first_room;
}					t_lem;


t_lem		*initialize_lem(void);
t_room		*initialize_room(void);
void		free_array(char **array);
int			get_rooms(char *line, t_room *r_data);

#endif