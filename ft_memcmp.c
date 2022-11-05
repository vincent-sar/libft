/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysar@student.42kl.edu.my <ysar>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:04:50 by ysar@studen       #+#    #+#             */
/*   Updated: 2022/11/05 16:18:34 by ysar@studen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
** SYNOPSIS: compare byte string
**
** DESCRIPTION:
** 		The memcmp() function compares byte string s1 against byte string s2.
**	Both strings are assumed to be n bytes long.
*/

#include <unistd.h>

int	*ft_memcmp(const void *lhs, const void *rhs, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		if (((unsigned char *)lhs)[i] != ((unsigned char *)rhs)[i])
			return (((unsigned char *)lhs)[i] - ((unsigned char *)rhs)[i]);
		i++;
	}
	return (0);
}
