/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoya <mmoya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 16:17:28 by mmoya             #+#    #+#             */
/*   Updated: 2017/11/17 15:04:32 by mmoya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	d = (char *)dst;
	s = (char *)src;
	if (src >= dst)
		ft_memcpy(dst, src, len);
	else
	{
		s += len;
		d += len;
		while (len--)
		{
			d--;
			s--;
			*d = *s;
		}
	}
	return (dst);
}
