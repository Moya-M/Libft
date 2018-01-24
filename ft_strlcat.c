/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoya <mmoya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 11:11:16 by mmoya             #+#    #+#             */
/*   Updated: 2017/11/14 15:39:38 by mmoya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *s1, const char *s2, size_t n)
{
	char		*d;
	const char	*s;
	size_t		size;
	size_t		dlen;

	d = s1;
	s = s2;
	size = n;
	while (size-- != 0 && *d != '\0')
		d++;
	dlen = d - s1;
	size = n - dlen;
	if (size == 0)
		return (dlen + ft_strlen(s));
	while (*s != '\0')
	{
		if (size != 1)
		{
			*d++ = *s;
			size--;
		}
		s++;
	}
	*d = '\0';
	return (dlen + (s - s2));
}
