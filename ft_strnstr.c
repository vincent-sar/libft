/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysar@student.42kl.edu.my <ysar>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:35:56 by ysar@studen       #+#    #+#             */
/*   Updated: 2022/11/09 13:40:42 by ysar@studen      ###   ########.fr       */
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
#include "libft.h"

char	*ft_strnstr(const char *hystk, const char *needl, size_t n)
{
	size_t	i;
	size_t	len;

	if (!*needl)
		return ((char *)hystk);
	i = 0;
	len = ft_strlen(needl);
	while (i < n && hystk[i] && i + len <= n)
	{
		if (ft_strncmp(hystk + i, needl, len) == 0)
			return ((char *)hystk + i);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int	ft_strncmp(const char *lhs, const char *rhs, size_t count)
// {
// 	unsigned int	i;
// 	i = 0;
// 	while (i < count)
// 	{
// 		if (lhs[i] != rhs[i])
// 			return ((unsigned char)lhs[i] - (unsigned char)rhs[i]);
// 		if (lhs[i] == '\0' && rhs[i] == '\0')
// 			return (0);
// 		i++;
// 	}
// 	return (0);
// }
// size_t	ft_strlen(const char *str)
// {
// 	size_t	l;
// 	l = 0;
// 	while (str[l])
// 		l++;
// 	return (l);
// }
// int	main()
// {
// 	//if (!needle) > if ((char)(*needle) == '\0')
// 	//NOTE IT SAYS IF IT'S EMPTY STRING. YOU CAN HAVE ADDRESS WITH EMPTY STRING.
// 	// char haystack[30] = "aaabcabcd";
// 	// char needle[10] = "aabc";
// 	// char * empty = (char*)"";
// 	// printf("#1 %p: %p\n", ft_strnstr(empty, "", -1), strnstr(empty, "", -1));
// 	// printf("#2 %p: %p\n", ft_strnstr(empty, "", 0), strnstr(empty, "", 0));
// 	// char *s1 = "see FF your FF return FF now FF";
// 	// char *s2 = "FF";
// 	// size_t max = strlen(s1);
// 	// char *i1 = strnstr(s1, s2, max);
// 	// char *i2 = ft_strnstr(s1, s2, max);
// 	// char *s1 = "oh no not the empty string !";
// 	// char *s2 = "";
// 	// size_t max = 0;
// 	// char *i1 = strnstr(s1, s2, max);
// 	// char *i2 = ft_strnstr(s1, s2, max);
// 	// if (i1 == i2)
// 	// 	s1 = "yes";
// 	char *i1 = strnstr(((void *)0), "fake", 0);
// 	char *i2 = ft_strnstr(((void *)0), "fake", 0);
// 	if (i1 == i2)
// 		i1 = "yes";
// }
// while (i < n && hystk[i] && i + len <= n)
// This is actually necessary for the i < n; to avoid n 0
// And it needs to be checked first
// Then hystk[i] is next for next error
// i + len <= n
// <= cuz we need to let some len = 0 check to works