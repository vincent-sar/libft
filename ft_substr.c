/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysar@student.42kl.edu.my <ysar>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:51:57 by ysar@studen       #+#    #+#             */
/*   Updated: 2022/11/05 17:25:49 by ysar@studen      ###   ########.fr       */
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

void	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t s_len;

	str = (char *)malloc(sizeof(char) * len + 1);
	if (!s || !str)
		return (0);
	if (start + len > s_len)
		len = s_len - start;
	ft_memmove(str, s + start, len);
	str[len] = '\0';
	return (str);
}
