/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysar@student.42kl.edu.my <ysar>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 11:36:23 by ysar@studen       #+#    #+#             */
/*   Updated: 2022/11/07 20:08:39 by ysar@studen      ###   ########.fr       */
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

// #include <stdio.h>
// int	main()
// {
// 	char s[] = "tripouille";
// 	printf("#1 %p: %p\n", ft_strchr(s, 't'), s);
// 	printf("#2 %p: %d\n", ft_strchr(s, 'z'), 0);
// 	 //This would mess up no type casting
// 	printf("#3 %p: %p\n", ft_strchr(s, 't' + 256), s);
// }
