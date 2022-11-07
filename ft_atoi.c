/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysar@student.42kl.edu.my <ysar>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:44:33 by ysar@studen       #+#    #+#             */
/*   Updated: 2022/11/07 13:07:58 by ysar@studen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	output;

	while (ft_isspace(*str))
		++str;
	sign = 1;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		++str;
	output = 0;
	while (ft_isdigit(*str))
	{
		output *= 10;
		output += *str - '0';
		++str;
	}
	return (output * sign);
}
