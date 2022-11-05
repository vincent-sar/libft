/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysar@student.42kl.edu.my <ysar>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 17:35:18 by ysar@studen       #+#    #+#             */
/*   Updated: 2022/11/05 17:35:55 by ysar@studen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** DESCRIPTION:
** 		Returns 1 if the char is in string, 0 if it's not.
*/

int ft_instr(char *str, char c)
{
	while (*str)
	{
		if (c == *str)
			return (1);
		str++;
	}
	return (0);
}