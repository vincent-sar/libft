/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysar@student.42kl.edu.my <ysar>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:44:33 by ysar@studen       #+#    #+#             */
/*   Updated: 2022/11/07 12:21:03 by ysar@studen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

long	ft_atoi(const char *str)
{
	size_t i;
	long multiplier;
	long output;

	i = 0;
	while (str[i] != '\0' && ft_strchr("\t\n\v\f\r ", str[i]))
		i++;
	if (str[i] == '+')
		i++;
	multiplier = 1;
	if (str[i] == '-')
	{
		multiplier *= -1;
		i++;
	}
	output = 0;
	while (str[i] != '\0' && ft_strchr("0123456789", str[i]))
	{
		output *= 10;
		output += str[i] - '0';
		i++;
	}
	return (output * multiplier);
}
