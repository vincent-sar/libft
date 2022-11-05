/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysar@student.42kl.edu.my <ysar>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:14:05 by ysar@studen       #+#    #+#             */
/*   Updated: 2022/11/05 18:23:29 by ysar@studen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *str;
	size_t i;

	str = ft_strdup(1, ft_len(s));
	if (!str || !s || !f)
		return (0);
	i = 0;
	while (str[i])
	{
		str[i] = f(i, str[i]);
		i++;
	}
	return (str);
}