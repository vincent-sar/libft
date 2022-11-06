/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysar <ysar@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 11:54:35 by ysar              #+#    #+#             */
/*   Updated: 2022/11/06 11:54:35 by ysar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *lastnode;
	if (!lst)
	{
		*lst = new;
		return ;
	}
	if (!new)
		return ;
	lastnode = ft_lstlast(*lst);
	if (!lastnode)
		return ;
	lastnode->next = new;
}