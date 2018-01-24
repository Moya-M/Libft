/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print2dstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoya <mmoya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 18:41:01 by mmoya             #+#    #+#             */
/*   Updated: 2017/11/17 14:36:34 by mmoya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print2dstr(char **str)
{
	int i;

	i = 0;
	if (!str)
		return ;
	while (str[i][0])
	{
		ft_putstr((const char *)str[i]);
		ft_putchar('\n');
		i++;
	}
}
