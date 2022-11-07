/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysar@student.42kl.edu.my <ysar>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 11:54:35 by ysar              #+#    #+#             */
/*   Updated: 2022/11/07 15:23:29 by ysar@studen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lastnode;

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
