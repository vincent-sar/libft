/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysar@student.42kl.edu.my <ysar>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:04:50 by ysar@studen       #+#    #+#             */
/*   Updated: 2022/11/05 16:16:20 by ysar@studen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
** SYNOPSIS: locate byte in byte string
**
** DESCRIPTION:
** 		The memchr() function locates the first occurrence of c (converted to an
**	unsigned char) in string s.
*/

#include <unistd.h>

void	*ft_memchr(const void *ptr, int ch, size_t count)
{
	size_t i;

	i = 0;
	while (i < count)
	{
		if (((unsigned char *)ptr)[i] == (unsigned char)ch)
			return ((void *)(ptr + i));
		i++;
	}
	return (0);
}
