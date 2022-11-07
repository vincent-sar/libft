/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysar@student.42kl.edu.my <ysar>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 11:36:23 by ysar@studen       #+#    #+#             */
/*   Updated: 2022/11/07 14:00:50 by ysar@studen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
** SYNOPSIS: write a byte to a byte string
**
** DESCRIPTION:
** 		The memset() function writes n bytes of value c (converted to an
**	unsigned char) to the string s.
*/

#include <unistd.h>

void	*ft_memset(void *dst, int ch, size_t count)
{
	unsigned char	*str;

	str = (unsigned char *)dst;
	if (!dst)
		return (dst);
	while (count-- > 0)
		*str++ = ch;
	return (dst);
}

/*
** int	main()
** {
** 	char str[] = "checking";
** 	ft_memset(str, 'a', 0);
** }
*/