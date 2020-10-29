/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Melissa <Melissa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 20:10:39 by malasalm          #+#    #+#             */
/*   Updated: 2020/10/16 14:50:26 by Melissa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** converts a lower-case letter to the corresponding upper-case letter. The
** argument must be representable as an unsigned char or the value of EOF. If
** the argument is a lower-case letter, the toupper() function returns the
** corresponding upper-case letter if there is one; otherwise, the argument
** is returned unchanged.
*/

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
		return (c);
	}
	return (c);
}
