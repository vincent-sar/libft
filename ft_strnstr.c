/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysar@student.42kl.edu.my <ysar>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:35:56 by ysar@studen       #+#    #+#             */
/*   Updated: 2022/11/07 18:41:41 by ysar@studen      ###   ########.fr       */
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

	if ((char)(*needle) == '\0')
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

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int	main()
// {
// 	//if (!needle) > if ((char)(*needle) == '\0')
// 	//NOTE IT SAYS IF IT'S EMPTY STRING. YOU CAN HAVE ADDRESS WITH EMPTY STRING.
// 	char haystack[30] = "aaabcabcd";
// 	char needle[10] = "aabc";
// 	char * empty = (char*)"";
// 	printf("#1 %p: %p\n", ft_strnstr(empty, "", -1), strnstr(empty, "", -1));
// 	printf("#2 %p: %p\n", ft_strnstr(empty, "", 0), strnstr(empty, "", 0));
// 	printf("#3 %p: %p\n", ft_strnstr(haystack, needle, -1), strnstr(haystack, needle, -1));
// }
