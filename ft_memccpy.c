/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoya <mmoya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 12:13:17 by mmoya             #+#    #+#             */
/*   Updated: 2017/11/10 17:43:08 by mmoya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *pdst;
	unsigned char *psrc;

	if (n)
	{
		pdst = (unsigned char *)dst;
		psrc = (unsigned char *)src;
		if ((*pdst++ = *psrc++) == (unsigned char)c)
			return (pdst);
		while (--n != 0)
		{
			if ((*pdst++ = *psrc++) == (unsigned char)c)
				return (pdst);
		}
	}
	return (0);
}
