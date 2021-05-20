/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 22:24:59 by marvin            #+#    #+#             */
/*   Updated: 2021/05/11 22:24:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *nptr)
{
    int i;
    int sign;
    long long ret;

    i = 0;
    sign = 1;
    ret = 0;
    while (nptr[i] == ' ')
        i++;
    if (nptr[i] == '-' || nptr[i] == '+')
    {
        if (nptr[i] == '-')
            sign = -sign;
        i++;
    }
    while (nptr[i] && ft_isdigit(nptr[i]))
    {
        ret = ret * 10 + (nptr[i] - '0');
        i++;
    }
    if (ret > 9223372036854775807)
        return (-1);
    return (ret * sign);
}