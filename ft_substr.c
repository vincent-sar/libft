/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysar@student.42kl.edu.my <ysar>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:51:57 by ysar@studen       #+#    #+#             */
/*   Updated: 2022/11/07 19:22:58 by ysar@studen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: N/A
** SYNOPSIS: extract substring from string
**
** DESCRIPTION:
** 		Allocates (with malloc(3)) and returns a substring from the string ’s’.
**	The substring begins at index ’start’ and is of maximum size ’len’.
*/

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	s_len;

	if (!s)
		return (0);
	if ((unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	s_len = ft_strlen(s);
	if (start + len > s_len)
		len = s_len - start;
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (0);
	ft_memmove(str, s + start, len);
	str[len] = '\0';
	return (str);
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
// void	*ft_memmove(void *dst, const void *src, size_t len)
// {
// 	unsigned char	*d1;
// 	unsigned char	*s1;
// 	int				i;
// 	if (!dst && !src)
// 		return (0);
// 	d1 = (unsigned char *)dst;
// 	s1 = (unsigned char *)src;
// 	if (d1 > s1)
// 	{
// 		i = (int)(len);
// 		while (--i >= 0)
// 			d1[i] = s1[i];
// 	}
// 	else
// 	{
// 		i = -1;
// 		while (++i < (int)len)
// 			d1[i] = s1[i];
// 	}
// 	return (dst);
// }
// char	*ft_strdup(const char *str)
// {
// 	char	*dst;
// 	size_t	len;

// 	len = ft_strlen(str);
// 	dst = malloc(sizeof(char) * len + 1);
// 	if (!dst)
// 		return (0);
// 	ft_memmove(dst, str, len + 1);
// 	return (dst);
// }
// int	main()
// {
// 	char * s = ft_substr("tripouille", 0, 42000); //Supposed to be null
// }
