/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysar <ysar@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 12:31:42 by ysar              #+#    #+#             */
/*   Updated: 2022/11/06 12:31:42 by ysar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: N/A
** SYNOPSIS: apply function to content of all list's elements
**
** DESCRIPTION:
** 		Iterates the list ’lst’ and applies the function ’f’ to the content of
**	each element.
*/

#include <stdlib.h>
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *lst_hold;

	if (!lst || !f)
		return ;
	while (lst) //TL:DR - inelegant
	{
		lst_hold = lst->next;
		f(lst_hold); //Wrong, the function manipulation is always done on the content. 
		lst = lst_hold;
	}
}