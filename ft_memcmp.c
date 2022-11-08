/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysar@student.42kl.edu.my <ysar>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:04:50 by ysar@studen       #+#    #+#             */
/*   Updated: 2022/11/07 13:31:16 by ysar@studen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
** SYNOPSIS: compare byte string
**
** DESCRIPTION:
** 		The memcmp() function compares byte string s1 against byte string s2.
**	Both strings are assumed to be n bytes long.
*/

#include <unistd.h>

int	ft_memcmp(const void *lhs, const void *rhs, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;

	if (n == 0)
		return (0);
	s1 = (unsigned char *)lhs;
	s2 = (unsigned char *)rhs;
	while (*s1 == *s2 && --n > 0)
	{
		++s1;
		++s2;
	}
	return (*s1 - *s2);
}


//Once again with memory, don't need to ensure it terminates
//we may need to chek across allocation; so dunnid check '\0'
// int	main()
// {
// 	char str1[] = "yoooo";
// 	char str2[] = "yoopp";
// 	int check = ft_memcmp(str1, str2, 5);
// }
