/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysar@student.42kl.edu.my <ysar>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:37:53 by ysar@studen       #+#    #+#             */
/*   Updated: 2022/11/07 18:35:44 by ysar@studen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
** SYNOPSIS: locate character in string (last occurence)
**
** DESCRIPTION:
** 		The strrchr() function locates the last occurrence of c (converted to a
**	char) in the string s.  If c is `\0', strrchr() locates the terminating
**	`\0'.
*/

#include "libft.h"
#include <unistd.h>

char	*ft_strrchr(const char *str, int ch)
{
	int	len;

	if (!str)
		return (0);
	len = ft_strlen(str);
	while (len >= 0 && str[len] != (char)ch)
		len--;
	if (*(str + len) == (char)ch)
		return ((char *)(str + len));
	else
		return (0);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
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
// 	// len = ft_strlen(str); < need to include null terminator, not - 1
// 	char s[] = "tripouille";
// 	char s2[] = "ltripouiel";
// 	char s3[] = "";
// 	char * empty = (char*)calloc(1, 1);
// 	printf("#1 %p: %p\n", ft_strrchr(s, 'z'), strrchr(s, 'z'));
// 	printf("#2 %p: %p\n", ft_strrchr(s, 0), strrchr(s, 0));
// 	printf("#3 %p: %p\n", ft_strrchr(s, 't' + 256), strrchr(s, 't' + 256));
// 	printf("#4 %p: %p\n", ft_strrchr(empty, 'V'), strrchr(empty, 'V'));
// 	printf("#5 %p: %p\n", ft_strrchr(s3, 0), strrchr(s3, 0));
// 	free(empty);
// }
