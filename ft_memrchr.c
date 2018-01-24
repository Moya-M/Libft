/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoya <mmoya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 15:15:34 by mmoya             #+#    #+#             */
/*   Updated: 2017/11/14 13:40:40 by mmoya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memrchr(const void *dst, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptd;

	ptd = (unsigned char *)dst;
	i = n;
	while (i != 0)
	{
		if (ptd[i] == (unsigned char)c)
			return (&ptd[i]);
		i--;
	}
	if (ptd[0] == (unsigned char)c)
		return (&ptd[0]);
	return (NULL);
}
