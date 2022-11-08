/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysar@student.42kl.edu.my <ysar>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:01:28 by ysar@studen       #+#    #+#             */
/*   Updated: 2022/11/07 18:30:27 by ysar@studen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
** SYNOPSIS: compare strings (size-bounded)
**
** DESCRIPTION:
** 		The strcmp() and strncmp() functions lexicographically compare the null-
**	terminated strings lhs and rhs.
** 		The strncmp() function compares not more than n characters.  Because
**	strncmp() is designed for comparing strings rather than binary data,
**	characters that appear after a `\0' character are not compared.
*/

#include <unistd.h>

int	ft_strncmp(const char *lhs, const char *rhs, size_t count)
{
	unsigned int	i;

	i = 0;
	while (i < count)
	{
		if (lhs[i] != rhs[i])
			return (lhs[i] - rhs[i]);
		if (lhs[i] == '\0' && rhs[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}


// ```
// if (lhs[i] == '\0' && rhs[i] == '\0')
// ```
// Helps to avoid when the string is longer.