/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysar@student.42kl.edu.my <ysar>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 16:23:29 by ysar@studen       #+#    #+#             */
/*   Updated: 2022/08/31 16:23:29 by ysar@studen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	len1;
	size_t	len2;
	
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	dest = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!dest)
		return (0);
	ft_memmove(dest, s1, len1);
	ft_memmove(dest + len1, s2, len2);
	dest[len1 + len2 + 1] = '\0';
	return (dest);
}
