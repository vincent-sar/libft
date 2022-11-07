/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysar@student.42kl.edu.my <ysar>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:37:53 by ysar@studen       #+#    #+#             */
/*   Updated: 2022/11/07 18:10:17 by ysar@studen      ###   ########.fr       */
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
	while (*str != '\0' && *str != (char)ch)
		str++;
	if (*str == (char)ch)
		return ((char *)str);
	else
		return (0);
}

// #include <stdio.h>
// int	main()
// {
// 	char s[] = "tripouille";
// 	printf("#1 %p: %p\n", ft_strchr(s, 't'), s);
// 	printf("#2 %p: %d\n", ft_strchr(s, 'z'), 0);
// 	 //This would mess up no type casting
// 	printf("#3 %p: %p\n", ft_strchr(s, 't' + 256), s);
// }
