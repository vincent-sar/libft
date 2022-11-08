/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysar <ysar@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:51:57 by ysar@studen       #+#    #+#             */
/*   Updated: 2022/11/08 18:36:21 by ysar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <stdlib.h>
** SYNOPSIS: memory allocation
**
** DESCRIPTION:
** 		The calloc() function contiguously allocates enough space for count
**	objects that are size bytes of memory each and returns a pointer to the
**	allocated memory. The allocated memory is filled with bytes of value
**	zero.
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdint.h>
#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	size_t	size_amt;
	void	*array;

	if (num == SIZE_MAX || size == SIZE_MAX)
		return (0);
	size_amt = size * num;
	array = malloc(size_amt);
	if (!array)
		return (0);
	ft_bzero(array, size_amt);
	return (array);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// void	ft_bzero(void *s, size_t n)
// {
// 	ft_memset(s, 0, n);
// }
// void	*ft_memset(void *dst, int ch, size_t count)
// {
// 	unsigned char	*str;
// 	str = (unsigned char *)dst;
// 	if (!dst)
// 		return (dst);
// 	while (count-- > 0)
// 		*str++ = ch;
// 	return (dst);
// }
// int	main()
// {
// 	//https://stackoverflow.com/questions/19367881/
//	  how-much-memory-calloc-and-malloc-can-allocate
// 	//Max is max size of size_t, so we just get their max size for failsafe
// 	printf("%p:%p\n",ft_calloc(SIZE_MAX, SIZE_MAX), calloc(SIZE_MAX, SIZE_MAX));
// 	printf("#2 %p: %p\n", ft_calloc(SIZE_MAX, 1), calloc(SIZE_MAX, 1));
// 	printf("#3 %p: %p\n", ft_calloc(1, SIZE_MAX), calloc(1, SIZE_MAX));
// 	printf("#4 %p: %p\n", ft_calloc(100, SIZE_MAX), calloc(100, SIZE_MAX));
// 	char *string = ft_calloc(1, 10);
// 	string = 0;
// }
