/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Melissa <Melissa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 12:23:16 by malasalm          #+#    #+#             */
/*   Updated: 2020/10/11 16:42:03 by Melissa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** outputs the string “s” to the standard output. Uses ft_putchar.
*/

#include "libft.h"

void	ft_putstr(char const *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar(s[i]);
		i++;
	}
}
