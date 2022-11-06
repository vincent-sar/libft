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
	t_list *lst_hold; //Can be done with one variable less so I'm re-writing it
	t_list *lst_next;

	if (!*lst || !lst) //!lst > This is not needed because address may still exist and already empty
		return ;
	lst_hold = *lst;
	while (lst_hold)
	{
		lst_next = lst_hold->next;
		del(lst_hold->content);
		free(lst_hold);
		lst_hold = lst_next;
	}
	*lst = NULL;
}