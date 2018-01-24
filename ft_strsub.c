/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoya <mmoya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 19:27:48 by mmoya             #+#    #+#             */
/*   Updated: 2017/11/13 19:43:53 by mmoya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;
	int		j;

	i = (int)start;
	j = 0;
	if (!(str = malloc(len + 1)) || !s)
		return (NULL);
	while (s[i])
		str[j++] = s[i++];
	str[len] = '\0';
	return (str);
}
