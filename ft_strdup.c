/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysar@student.42kl.edu.my <ysar>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:51:57 by ysar@studen       #+#    #+#             */
/*   Updated: 2022/11/05 17:33:16 by ysar@studen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
** SYNOPSIS: save a copy of a string (with malloc)
**
** DESCRIPTION:
** 		The strdup() function allocates sufficient memory for a copy of the
**	string s1, does the copy, and returns a pointer to it.  The pointer may
**	subsequently be used as an argument to the function free(3).
*/

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_strdup(const char *str)
{
	char *dest;
	size_t len;
	
	len = ft_strlen(str);
	dest = (char *)malloc(sizeof(char) * len + 1);
	if (!dest)
		return (0);
	ft_memmove(dest, str, len + 1);
	return (dest);
}
