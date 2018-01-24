/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoya <mmoya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 12:37:08 by mmoya             #+#    #+#             */
/*   Updated: 2017/11/13 20:03:24 by mmoya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*r;
	size_t	i;

	i = 0;
	if (!(r = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (i != size + 1)
		r[i++] = '\0';
	return (r);
}
