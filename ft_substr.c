/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 21:27:37 by marvin            #+#    #+#             */
/*   Updated: 2021/05/13 21:27:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *news;
    size_t i;

    if (!(news = (char *)ft_calloc(len + 1, sizeof(char))))
        return (NULL);
    if (!s || start >= ft_strlen(s))
        return (NULL);
    i = -1;
    while (++i < len && s[start])
    {
        news[i] = s[start++];
    }
    news[i] = '\0';
    return (news);
}