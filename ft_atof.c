/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiacomi <egiacomi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 23:26:49 by egiacomi          #+#    #+#             */
/*   Updated: 2022/02/06 19:17:28 by egiacomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <math.h>

int	ft_c_in_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (0);
		++charset;
	}
	return (1);
}

int	ft_is_charset(const char *str, char *charset)
{
	int	i;

	i = 0;
	while (!ft_c_in_charset(str[i], charset) && str[i])
		++i;
	if (str[i] == '\0')
		return (0);
	return (1);
}

double	ft_atof(char *str)
{
	double			result;
	int				i;
	int				sign;
	unsigned int	len;

	i = 0;
	sign = 1;
	result = 0.0;
	if (ft_is_charset(str, "-+.0123456789") || ft_strlen(str) > 12)
		return (0.0);
	if (str[i] == '-')
		sign = -sign;
	result = (double)ft_atoi(str);
	while (str[i] && str[i] != '.')
		++i;
	if (str[i] == '.' && str[i + 1])
	{
		++i;
		len = ft_strlen(str) - i;
		result += (double)ft_atoi(str + i) / pow(10, len);
	}
	return (result * sign);
}
