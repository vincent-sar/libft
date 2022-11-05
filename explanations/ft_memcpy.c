/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysar@student.42kl.edu.my <ysar>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 11:36:23 by ysar@studen       #+#    #+#             */
/*   Updated: 2022/11/05 14:49:45 by ysar@studen      ###   ########.fr       */
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

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	size_t	i;
	
	//YOU NEED BOTH, IT CAN COPY TO A BLANK LOCATION; OR GIBBERISH FROM BLANK SOURCE
	//Means the pointer address exist if (dest)
	if (!dest && !src)
		return (0);
	i = 0;
	while (i < count)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	src[] = "Hello";
	char	dst[] = "World";

	char	src1[] = "Hello";
	char	dst1[] = "World";

	char	src2[] = "Hello";
	char	dst2[] = "World";

	char	src3[] = "Hello";
	char	dst3[] = "World";

	char	dup1[] = "ABCDE";
	char	dup2[] = "ABCDE";


	printf("%s\n", memcpy(dst, src, 6));
	printf("%s\n", ft_memcpy(dst1, src1, 6));

	printf("%s\n", memcpy(dst2, src2, 2));
	printf("%s\n", ft_memcpy(dst3, src3, 2));
	
	//Objective 'AB[C'DE] > ABABC
	//I'm moving to get 'AB[C'DE] [source is ABCDE, destination is at CDE] > ABABC
	
	//[---- src ----]
    //      [---- dst ---]

	//But what's happening is...
	//ABCDE
	//ABADE
	//ABABE < Notice how here my E doesn't get my C as C is already gone, it's taking A
	//ABABA
	//AB[ABA] is returned

	//Which is why behavior is called undefined

	printf("'Hello' overlap char: %s\n", memcpy(dup1 + 2, dup1, 3));
	printf("'Hello' overlap char: %s\n", ft_memcpy(dup2 + 2, dup2, 3)); //ESSENTIALLY SAME THING; RECREATE SCR1 CUZ IT MODIFIES INTERNAL VALUE
	return (0);
}
