/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 16:46:30 by marvin            #+#    #+#             */
/*   Updated: 2021/05/26 16:46:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	while (lst)
	{
		(*del)(lst);
		free((*lst)->content);
		(*lst) = (*lst)->next;
	}
	(*lst) = NULL;
}