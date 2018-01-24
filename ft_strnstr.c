/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoya <mmoya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 17:00:18 by mmoya             #+#    #+#             */
/*   Updated: 2017/11/16 14:56:50 by mmoya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *ne, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	if (hay[0] == '\0' && ne[0] == '\0')
		return ("\0");
	while (hay[i] != '\0' && ne[k] != '\0' && i != len)
	{
		if (hay[i] != ne[k])
		{
			k = 0;
			i = j++;
		}
		if (hay[i] == ne[k])
			k++;
		i++;
	}
	if (hay[i - k] == '\0')
		return (NULL);
	if (ft_strlen(ne) == k)
		return ((char *)hay + i - k);
	return (NULL);
}
