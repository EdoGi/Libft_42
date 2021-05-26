/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 17:06:06 by marvin            #+#    #+#             */
/*   Updated: 2021/05/26 17:06:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
    t_list  *newlst;
    
    while (lst)
    {
        newlst = (t_list *)malloc(sizeof(t_list));
        if (!newlst)
        {
            (del)(newlst->content);
            return (NULL);
        }
        newlst->next = lst->next;
        newlst->content = (*f)(lst->content);
        lst = lst->next;
        newlst = newlst->next;
    }
    newlst->next = NULL;
    return newlst;
}