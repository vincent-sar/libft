/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysar@student.42kl.edu.my <ysar>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:44:33 by ysar@studen       #+#    #+#             */
/*   Updated: 2022/11/05 16:46:20 by ysar@studen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_instr(char c, char *str)
{
	while (*str)
	{
		if (c == *str)
			return (1);
		str++;
	}
	return (0);
}

long	ft_atoi(const char *str)
{
	size_t i;
	long multiplier;
	long output;

	i = 0;
	while (str[i] != '\0' && ft_instr(str[i], "\t\n\v\f\r "))
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
	while (str[i] != '\0' && ft_instr(str[i], "0123456789"))
	{
		output *= 10;
		output += str[i] - '0';
		i++;
	}
	return (output * multiplier);
}
