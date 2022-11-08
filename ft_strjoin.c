/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: ysar@student.42kl.edu.my <ysar>            +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2022/08/31 16:23:29 by ysar@studen       #+#    #+#             */
/*   Updated: 2022/08/31 16:23:29 by ysar@studen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	dst = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!dst)
		return (0);
	ft_memmove(dst, s1, len1);
	ft_memmove(dst + len1, s2, len2);
	dst[len1 + len2] = '\0';
	return (dst);
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
// int	main()
// {
// 	printf("First round\n");
// 	printf("#1 %s: %s\n", ft_strjoin("", "42"), "42");
// 	printf("#2 %s: %s\n", ft_strjoin("42", ""), "42");
// 	printf("#3 %s: %s\n", ft_strjoin("", ""), "");
// }