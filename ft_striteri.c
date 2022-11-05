/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysar@student.42kl.edu.my <ysar>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:14:05 by ysar@studen       #+#    #+#             */
/*   Updated: 2022/11/05 18:26:26 by ysar@studen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

char *ft_striteri(char *s, char (*f)(unsigned int, char *))
{
	size_t i;

	if (!s || !f)
		return (0);
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
	return (s);
}