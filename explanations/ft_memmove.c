/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysar <ysar@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 11:03:02 by ysar              #+#    #+#             */
/*   Updated: 2022/11/06 11:03:02 by ysar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
** SYNOPSIS: copy byte string
**
** DESCRIPTION:
** 		The memmove() function copies n bytes from string s2 to string s1.  The
**	two strings may overlap; the copy is always done in a non-destructive
**	manner.
*/

#include <unistd.h>

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t i;

	if (!dest && !src)
		return (0);
	i = 0;
	if (src < dest)
	{
		i = len - 1;
		while (i < len)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	else
	{
		while (i < len)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	src[] = "Hello";
	char	dest[] = "World";

	char	src1[] = "Hello";
	char	dest1[] = "World";

	char	src2[] = "Hello";
	char	dest2[] = "World";

	char	src3[] = "Hello";
	char	dest3[] = "World";

	char	dup1[] = "ABCDE";
	char	dup2[] = "ABCDE";

	char	dup3[] = "ABCDE";
	char	dup4[] = "ABCDE";

	printf("%s\n", memmove(dest, src, 6));
	printf("%s\n", ft_memmove(dest1, src1, 6));

	printf("%s\n", memmove(dest2, src, 2));
	printf("%s\n", ft_memmove(dest3, src3, 2));
	
	//=================================================================================
	//THE PROBLEM OF [LEFT THE RIGHT] MEMCOPY IS RESOLVED WITH MEMMOVE THORUGH [RIGHT TO LEFT]

	//[---- src ----]
    //      [---- dest ---]
	
	//Objective 'AB[C'DE] > ABABC
	//I'm moving to get 'AB[C'DE] [source is ABCDE, destination is at CDE] > ABABC
	
	//Memcpy left to right, so we get ABABA - not ideal [Sees ft_memcpy.c]
	//ABCDE
	//ABADE
	//ABABE < Notice how here my E doesn't get my C as C is already gone, it's taking A
	//ABABA
	//AB[ABA] is returned

	//SOLUTION: RIGHT TO LEFT [higher to lower memory]
	//https://stackoverflow.com/questions/1201319/what-is-the-difference-between-memmove-and-memcpy
	
	//Objective 'AB[C'DE] > ABABC | Right to left = no problem
	//ABCDE
	//ABCDC
	//ABCBC < Notice how here my E doesn't get my C as C is already gone, it's taking A
	//ABABC
	//AB[ABC] < so it's returned accurately

	//=================================================================================
	//BUT - IF I DO RIGHT TO LEFT ALL THE TIME; INVERT SOURCE/MEMORY = PROBLEM
	//[---- dest ----]
    //      [---- src ---]

	//Objective [AB'C]DE' > CDEDE
	//ABCDE
	//ABEDE
	//ADEDE
	//EDEDE < Notice how here my A is getting E. 
	//[EDE]DE < Cacat outcome

	//So, whenever destination is before source (destination < source), we stick to left to right
	//Objective [AB'C]DE' > CDEDE
	//ABCDE < Notice how here my A is getting C without problem compare to above
	//CBCDE
	//CDCDE
	//CDEDE
	//[CDE]DE < Correct outcome

	//Which is why people say: memmove can handle overlapping memory, memcpy can't.

	printf("'Hello' overlap char: %s\n", memmove(dup1 + 2, dup1, 3));
	printf("'Hello' overlap char: %s\n", ft_memmove(dup2 + 2, dup2, 3)); //ESSENTIALLY SAME THING; RECREATE SCR1 CUZ IT MODIFIES INTERNAL VALUE

	printf("'Hello' overlap char: %s\n", memmove(dup3, dup3 + 2, 3));
	printf("'Hello' overlap char: %s\n", ft_memmove(dup4, dup4 + 2, 3));
	
	return (0);
}
