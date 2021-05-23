/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 23:10:23 by marvin            #+#    #+#             */
/*   Updated: 2021/05/23 23:10:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void ft_lstadd_back(t_list **alst, t_list *new)
{
    t_list  *last;

    last = ft_lstlast(*alst);
    last->next = new;
    new->next = NULL;
}
