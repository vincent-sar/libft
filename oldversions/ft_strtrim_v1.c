/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_v1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysar@student.42kl.edu.my <ysar>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 13:04:14 by ysar              #+#    #+#             */
/*   Updated: 2022/11/07 13:00:12 by ysar@studen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
** LIBRARY: N/A
** SYNOPSIS: trim beginning and end of string with the specified characters
**
** DESCRIPTION:
** 		Allocates (with malloc(3)) and returns a copy of ’s1’ with the
**	characters specified in ’set’ removed from the beginning and the end of the
**	string.
*/

char *ft_strtrim(char const *s1, char const *set)
{
	size_t count;
	char *str;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	count = ft_strlen(s1) - 1;
	while (s1[count] && ft_strchr(set, s1[count]))
		count--;
	str = malloc(sizeof(char) * count + 1); //THIS CHUNK CAN BE REPLACED WITH SUBSTRING
	if (!str)
		return (NULL);
	str[count] = '\0';
	ft_memmove(str, s1, count);
	return (str); //THIS CHUNK CAN BE REPLACED WITH SUBSTRING
}
