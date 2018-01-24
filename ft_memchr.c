/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoya <mmoya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 15:15:34 by mmoya             #+#    #+#             */
/*   Updated: 2017/11/10 12:32:22 by mmoya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *dst, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptd;

	i = 0;
	ptd = (unsigned char *)dst;
	while (i != n)
	{
		if (ptd[i] == (unsigned char)c)
			return (&ptd[i]);
		i++;
	}
	return (NULL);
}
