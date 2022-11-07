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
	dst[len1 + len2 + 1] = '\0';
	return (dst);
}
