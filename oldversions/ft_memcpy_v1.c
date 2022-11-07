/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_v1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysar@student.42kl.edu.my <ysar>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 11:36:23 by ysar@studen       #+#    #+#             */
/*   Updated: 2022/11/07 13:14:16 by ysar@studen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** LIBRARY: <string.h>
** SYNOPSIS: copy memory area
**
** DESCRIPTION:
** 		The memcpy() function copies n bytes from memory area s2 to memory area
**	s1.  If s1 and s2 overlap, behavior is undefined.  Applications in which
**	s1 and s2 might overlap should use memmove(3) instead.
*/

void	*ft_memcpy(void *dst, const void *src, size_t count)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	
	//Need some seniors to grill this code because they say you're not supposed to typecast pointer to void
	//This chunk here check, if memory overlaps then we return null

	//UPDATE: I LEARNED THAT BEHAVIOR IS UNDEFINED - DOESN'T MEAN IT'S NULL
	//IT JUST MEANS VERY CACAT BEHAVIOR. SO, DUNNID TO NULL IT HAI YA.
	while (((unsigned char *)dst)[i] && ((unsigned char *)src)[j])
	{
		if (dst + i == src + j)
			return (0);
		i++;
		j++;
	}
	/* CORRECT WAY
		if (!dst && !src) //YOU NEED BOTH, ELSE IT CAN COPY TO A BLANK LOCATION
			return (0);
	*/

	i = 0;
	while (i < count)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	src[] = "Hello";
	char	dst[] = "World";
	char	src1[] = "Hello";

	printf("6 char non-overlap: %s\n", memcpy(dst, src, 6));
	printf("6 char non-overlap: %s\n", ft_memcpy(dst, src, 6));
	printf("4 char non-overlap: %s\n", memcpy(dst, src, 4));
	printf("4 char non-overlap: %s\n", ft_memcpy(dst, src, 4));
	printf("'Hello' overlap char: %s\n", memcpy(src, src, 6));
	printf("'Hello' overlap char: %s\n", ft_memcpy(src, src, 6));
	printf("'Hello' overlap char: %s\n", memcpy(&src[2], &src[3], 3)); //ESSENTIALLY SAME THING; RECREATE SCR1 CUZ IT MODIFIES INTERNAL VALUE
	printf("'Hello' overlap char: %s\n", ft_memcpy(&src1[2], &src1[3], 3));
	return (0);
}
