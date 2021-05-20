/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 23:22:22 by marvin            #+#    #+#             */
/*   Updated: 2021/05/13 23:22:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    char *joined;
    int i;
    int totlen;
 
    i = -1;
    totlen = ft_strlen(s1) + ft_strlen(s2);
    if (!(joined = (char *)malloc((totlen + 1) * sizeof(char))))
        return(NULL);
    while (s1[++i])
        joined[i] = s1[i];
    ft_strlcat(joined, s2, ft_strlen(s2));
    return(joined);
}