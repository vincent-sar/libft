/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysar@student.42kl.edu.my <ysar>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 11:50:11 by ysar              #+#    #+#             */
/*   Updated: 2022/11/07 15:21:06 by ysar@studen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: N/A
** SYNOPSIS: find last element of list
**
** DESCRIPTION:
** 		Returns the last element of the list.
*/

#include "libft.h"
#include <unistd.h>

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
		lst = lst->next;
	return (lst);
}
