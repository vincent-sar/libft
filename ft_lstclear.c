/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysar@student.42kl.edu.my <ysar>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 12:13:32 by ysar              #+#    #+#             */
/*   Updated: 2022/11/09 14:55:39 by ysar@studen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: N/A
** SYNOPSIS: delete sequence of elements of list from a starting point
**
** DESCRIPTION:
** 		Deletes and frees the given element and every successor of that element,
**	using the function ’del’ and free(3). Finally, the pointer to the list must
**	be set to NULL.
*/

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*hold;

	if (!*lst || !lst || !del)
		return ;
	while (*lst)
	{
		hold = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = hold;
	}
}
