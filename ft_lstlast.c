/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 23:05:09 by marvin            #+#    #+#             */
/*   Updated: 2021/05/23 23:05:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list *ft_lstlast(t_list *lst)
{
	while(lst)
	{
		if (lst->next == NULL)
			return(lst);
		lst = lst->next;
	}
	return (lst);
}