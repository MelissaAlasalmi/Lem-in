/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Melissa <Melissa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:28:27 by malasalm          #+#    #+#             */
/*   Updated: 2020/10/15 20:51:36 by Melissa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** takes as a parameter the address of a string that need to be freed with
** free(3), then sets its pointer to NULL. Uses ft_memdel.
*/

#include "libft.h"

void	ft_strdel(char **as)
{
	if (as)
		ft_memdel((void **)as);
}
