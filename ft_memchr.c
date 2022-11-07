/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysar@student.42kl.edu.my <ysar>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:04:50 by ysar@studen       #+#    #+#             */
/*   Updated: 2022/11/07 18:02:05 by ysar@studen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
** SYNOPSIS: locate byte in byte string
**
** DESCRIPTION:
** 		The memchr() function locates the first occurrence of c (converted to an
**	unsigned char) in string s.
*/

#include <unistd.h>

void	*ft_memchr(const void *ptr, int c, size_t count)
{
	size_t			i;
	unsigned char	*str;

	i = -1;
	str = (unsigned char *)ptr;
	while (++i < count)
		if (str[i] == (unsigned char)c)
			return ((void *)(ptr + i));
	return (0);
}

// int	main()
// {
// 	char *check = ft_memchr("checking", 'h', 8);
// 	char s[] = {0, 1, 2 ,3 ,4 ,5};
// 	//This would have resulted in null if didn't have (unsigned char c)
// 	check = ft_memchr(s, 2 + 256, 3); 
// 	check = 0;
// }
