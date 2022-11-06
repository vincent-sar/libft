/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysar <ysar@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 12:13:32 by ysar              #+#    #+#             */
/*   Updated: 2022/11/06 12:13:32 by ysar             ###   ########.fr       */
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

#include <stdlib.h>
#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *hold;

	if (!*lst)
		return ;
	hold = *lst;
	while (hold)
	{
		del((*lst)->content);
		hold = (*lst)->next;
		free(*lst);
		*lst = hold; //This script is more elegant, but I still have this extra line to assign.
		//Then I re-read the script and realized - the trick is to use ft_delone.c, then we can save the 2 lines and reholding variables.
	}
	*lst = NULL;
}