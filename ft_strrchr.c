/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysar@student.42kl.edu.my <ysar>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:37:53 by ysar@studen       #+#    #+#             */
/*   Updated: 2022/11/05 15:59:55 by ysar@studen      ###   ########.fr       */
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

char	*ft_strchr(const char *str, int ch)
{
	size_t len;

	len = ft_strlen(str) - 1;
	while (len >= 0 && str[len] != ch)
		len--;
	if (*(str + len) == ch)
		return ((char *)(str + len));
	else
		return (0);
}
