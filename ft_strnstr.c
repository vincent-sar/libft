/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysar@student.42kl.edu.my <ysar>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:35:56 by ysar@studen       #+#    #+#             */
/*   Updated: 2022/11/07 14:26:05 by ysar@studen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
** SYNOPSIS: locate a substring in a string (size-bounded)
**
** DESCRIPTION:
** 		The strnstr() function locates the first occurrence of the null-termi-
**	nated string s2 in the string s1, where not more than n characters are
**	searched.  Characters that appear after a `\0' character are not
**	searched.
*/

#include <unistd.h>

char	*ft_strnstr(const char *str, const char *substr, size_t len)
{
	size_t	i;
	size_t	j;

	if (substr == '\0')
		return ((char *)str);
	i = 0;
	while (str[i] != '\0' && i + j < len)
	{
		j = 0;
		while (str[i + j] == substr[j] && str[i + j] != '\0' && i + j < len)
			j++;
		if (substr[j] == '\0')
			return ((char *)(str + i));
		i++;
	}
	return (0);
}
