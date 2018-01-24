/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoya <mmoya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 11:29:43 by mmoya             #+#    #+#             */
/*   Updated: 2017/11/16 15:04:10 by mmoya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *cur;
	t_list *tmp;

	cur = *alst;
	while (cur != NULL)
	{
		tmp = cur->next;
		del(cur->content, cur->content_size);
		free(cur);
		cur = tmp;
	}
	*alst = NULL;
}
