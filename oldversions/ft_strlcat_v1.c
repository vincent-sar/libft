/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_v1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysar@student.42kl.edu.my <ysar>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:16:19 by ysar@studen       #+#    #+#             */
/*   Updated: 2022/11/09 12:22:42 by ysar@studen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
** SYNOPSIS: size-bounded string concatenation
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
** 		The strlcat() function appends the NUL-terminated string src to the end
**	of dst.  It will append at most size - strlen(dst) - 1 bytes, NUL-termi
**	nating the result.
*/

#include "libft.h"
#include <unistd.h>

//Wee Hean said not elegant when use number, so we're shifting to pointer

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dlen;
	size_t	slen;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (!dst || !src)
		return (0);
	if (size == 0 || size <= dlen)
		return (size + slen);
	i = 0;
	j = dlen;
	while (src[i] != '\0' && i < size - dlen - 1)
	{
		dst[j] = src[i];
		++i;
		++j;
	}
	dst[j] = '\0';
	return (dlen + slen);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
size_t	ft_strlen(const char *str)
{
	size_t	l;
	l = 0;
	while (str[l])
		l++;
	return (l);
}
int	main()
{
	char b[0xF] = "nyan !";
	ft_strlcat(((void *)0), b, 0);
}