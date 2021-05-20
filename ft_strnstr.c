/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 23:13:42 by marvin            #+#    #+#             */
/*   Updated: 2021/05/11 23:13:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *ft_strnstr(const char *big, const char *little, size_t  len)
{
    size_t i;
    int j;
    
    i = 0;
    if (*little == '\0')
        return ((char *)&big[0]);
    while (big[i] && i < len)
    {
        j = 0;
        while (little[j] == big[i + j] && (i + j) < len)
        {
            if (little[j + 1] == 0)
                return ((char *)big + i);
            j++;
        }
        i++;
    }
    return (NULL);
}