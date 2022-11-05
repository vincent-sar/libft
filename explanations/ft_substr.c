/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysar@student.42kl.edu.my <ysar>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:51:57 by ysar@studen       #+#    #+#             */
/*   Updated: 2022/11/05 17:25:39 by ysar@studen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
** SYNOPSIS: save a copy of a string (with malloc)
**
** DESCRIPTION:
** 		The strdup() function allocates sufficient memory for a copy of the
**	string s1, does the copy, and returns a pointer to it.  The pointer may
**	subsequently be used as an argument to the function free(3).
*/

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>

void	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t s_len;

	str = (char *)malloc(sizeof(char) * len + 1);
	if (!s || !str)
		return (0);
	//If we skip this chunk: the problem is it can go beyond the string length
	if (start + len > s_len) //If the start + length we provide, total more than string length
		len = s_len - start; //s_len - start = remainder of all strings 
	ft_memmove(str, s + start, len);
	return (str);
}
