/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysar@student.42kl.edu.my <ysar>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:37:53 by ysar@studen       #+#    #+#             */
/*   Updated: 2022/11/05 15:49:04 by ysar@studen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
** SYNOPSIS: locate character in string (first occurrence)
**
** DESCRIPTION:
** 		The strchr() function locates the first occurrence of c (converted to a
**	char) in the string pointed to by s.  The terminating null character is
**	considered to be part of the string; therefore if c is `\0', the func-
**	tions locate the terminating `\0'.
*/

#include <unistd.h>

char	*ft_strchr(const char *str, int ch)
{
	while (*str != 0 && *str != ch)
		str++;
	if (*str == ch)
		return (char *)str;  //return (str) > if no casting can't compile > returning 'const char *' from a function with result type 'char *' discards qualifiers
	else
		return (0);
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*s1 = "Hello";

	printf("String Head: %p\n", s1);
	printf("String: %s\n", s1);
	printf("Expected l position: %p\n", (void *)(strchr(s1, 'l')));
	printf("Returned l position: %p\n", (void *)(ft_strchr(s1, 'l')));
	printf("Expected null position: %p\n", (void *)(strchr(s1, '\0')));
	printf("Returned null position: %p\n", (void *)(ft_strchr(s1, '\0')));
}
