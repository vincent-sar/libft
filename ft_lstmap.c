/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysar@student.42kl.edu.my <ysar>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 12:39:52 by ysar              #+#    #+#             */
/*   Updated: 2022/11/09 15:05:15 by ysar@studen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: N/A
** SYNOPSIS: apply function to content of all list's elements into new list
**
** DESCRIPTION:
** 		Iterates the list ’lst’ and applies the function ’f’ to the content of
**	each element. Creates a new list resulting of the successive applications of
**	the function ’f’. The ’del’ function is used to delete the content of an
**	element if needed.
*/

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start;
	t_list	*node;

	if (!lst || !f || !del)
		return (0);
	start = 0;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&start, del);
			return (0);
		}
		ft_lstadd_back(&start, node);
		lst = lst->next;
	}
	return (start);
}
