/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysar@student.42kl.edu.my <ysar>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:51:57 by ysar@studen       #+#    #+#             */
/*   Updated: 2022/11/05 17:01:13 by ysar@studen      ###   ########.fr       */
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
#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	size_t	size_amt;
	void	*array;

	size_amt = size * num;
	array = malloc(size_amt);
	if (!array)
		return (0);
	ft_bzero(array, size_amt);
	return (array);
}
