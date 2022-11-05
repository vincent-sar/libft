/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysar@student.42kl.edu.my <ysar>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 11:36:23 by ysar@studen       #+#    #+#             */
/*   Updated: 2022/11/05 15:24:57 by ysar@studen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
** SYNOPSIS: write a byte to a byte string
**
** DESCRIPTION:
** 		The memset() function writes n bytes of value c (converted to an
**	unsigned char) to the string s.
*/

#include <unistd.h>

void	*memset(void *dest, int ch, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
		((unsigned char *)dest)[i++] = ch;
	return (dest);
}
