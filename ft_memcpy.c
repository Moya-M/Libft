/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoya <mmoya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 13:26:03 by mmoya             #+#    #+#             */
/*   Updated: 2017/11/16 14:48:43 by mmoya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*ptd;
	char	*pts;

	i = 0;
	ptd = (char *)dst;
	pts = (char *)src;
	while (i != n)
	{
		ptd[i] = pts[i];
		i++;
	}
	return (dst);
}
