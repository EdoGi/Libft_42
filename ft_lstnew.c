/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 22:39:26 by marvin            #+#    #+#             */
/*   Updated: 2021/05/23 22:39:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list *ft_lstnew(void *content)
{
	t_list *newlist;

	newlist = malloc(sizeof(t_list));
	if (newlist)
	{
		newlist->content = content;
		newlist->next = NULL;
	}
	return(newlist);
<<<<<<< HEAD
}
=======
}
>>>>>>> 6b828e1dba56216c084cca9cb7640cfb947c3348
