/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysar@student.42kl.edu.my <ysar>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 13:05:26 by ysar@studen       #+#    #+#             */
/*   Updated: 2022/11/07 17:53:33 by ysar@studen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
** SYNOPSIS: copy byte string
**
** DESCRIPTION:
** 		The memmove() function copies n bytes from string s2 to string s1.  The
**	two strings may overlap; the copy is always done in a non-d1ructive
**	manner.
*/

#include <unistd.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d1;
	unsigned char	*s1;
	int				i;

	if (!dst && !src)
		return (0);
	d1 = (unsigned char *)dst;
	s1 = (unsigned char *)src;
	if (d1 > s1)
	{
		i = (int)(len);
		while (--i >= 0)
			d1[i] = s1[i];
	}
	else
	{
		i = -1;
		while (++i < (int)len)
			d1[i] = s1[i];
	}
	return (dst);
}
