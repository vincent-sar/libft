/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysar <ysar@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 12:39:52 by ysar              #+#    #+#             */
/*   Updated: 2022/11/06 12:39:52 by ysar             ###   ########.fr       */
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

#include <stdlib.h>
#include "libft.h"

t_list **ft_lstclone(t_list *lst, void (*del)(void *))
{
	t_list **lst_array;
	t_list *prev_node;
	t_list *node;

	if (!lst)
		return (NULL);
	while (lst)
	{
		node = ft_lstnew(lst->content); //Attempt to clone an element 
		if (!node) //If failed
		{
			if (*lst_array) //If we already have a few other elements, clear em all; else dunnid clear
				ft_lstclear(lst_array, del);
			return (NULL); //Then return null
		}
		if (prev_node) //If there's already a previous node [i.e. not the first]
			prev_node->next = node; //Reset previous's address to current
		else
			*lst_array = node; //Else it's the first, lodge it in as first address
		prev_node = node; //Save down previous node for future loop
		lst = lst->next; //Allow progression of while loop
	}
	return (lst_array);
}

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list **lst_array;
	if (!lst || !f || !del)
		return (NULL);
	lst_array = ft_lstclone(lst, del); //Clone it into a brand new list
	if (!lst_array)
		return (NULL);
	ft_lstiter(*lst_array, f); //Apply the function on all elements 
	return (*lst_array);
}
