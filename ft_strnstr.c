/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysar@student.42kl.edu.my <ysar>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:35:56 by ysar@studen       #+#    #+#             */
/*   Updated: 2022/11/07 16:23:45 by ysar@studen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
** SYNOPSIS: locate a substring in a string (size-bounded)
** 
** DESCRIPTION:
** 		The strnstr() function locates the first occurrence of the null-termi-
** 	nated string s2 in the string s1, where not more than n characters are
** 	searched.  Characters that appear after a `\0' character are not
** 	searched.
** 
** RETURN:
** 		If needle is an empty string, haystack is returned; if needle
** 	occurs nowhere in haystack, NULL is returned; otherwise a pointer
** 	to the first character of the first occurrence of needle is returned.
** 
*/

#include <unistd.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!needle)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0' && i + j < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && haystack[i + j] != '\0'
			&& i + j < len)
			j++;
		if (needle[j] == '\0')
			return ((char *)(haystack + i));
		i++;
	}
	return (0);
}
