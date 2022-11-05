/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysar@student.42kl.edu.my <ysar>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:16:19 by ysar@studen       #+#    #+#             */
/*   Updated: 2022/11/05 15:54:27 by ysar@studen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
** SYNOPSIS: size-bounded string copying
**
** DESCRIPTION:
** 		The strlcpy() and strlcat() functions copy and concatenate strings
**	respectively.  They are designed to be safer, more consistent, and less
**	error prone replacements for strncpy(3) and strncat(3).  Unlike those
**	functions, strlcpy() and strlcat() take the full size of the buffer (not
**	just the length) and guarantee to NUL-terminate the result (as long as
**	size is larger than 0 or, in the case of strlcat(), as long as there is
**	at least one byte free in dst).  Note that you should include a byte for
**	the NUL in size.  Also note that strlcpy() and strlcat() only operate on
**	true ``C'' strings.  This means that for strlcpy() src must be NUL-termi-
**	nated and for strlcat() both src and dst must be NUL-terminated.
** 		The strlcpy() function copies up to size - 1 characters from the NUL-
**	terminated string src to dst, NUL-terminating the result.
*/

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int				count;
	unsigned int	i;

	count = 0;
	i = 0;
	while (src[count])
		count++;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (count);
}
