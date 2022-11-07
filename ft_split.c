/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysar@student.42kl.edu.my <ysar>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 17:34:57 by ysar@studen       #+#    #+#             */
/*   Updated: 2022/11/07 15:43:36 by ysar@studen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_count_words(char *str, char c)
{
	size_t	count;

	count = 0;
	while (*str != '\0')
	{
		while (*str == c)
			str++;
		if (*str != '\0' && *str != c)
			count++;
		while (*str != '\0' && *str != c)
			str++;
	}
	return (count);
}

char	**ft_split(const char *s, char c)
{
	size_t	i;
	size_t	start_idx;
	size_t	word;
	char	**arr;

	arr = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!(arr))
		return (NULL);
	i = 0;
	word = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			start_idx = i;
			while (s[i] != c && s[i] != '\0')
				i++;
			arr[word++] = ft_substr(s, start_idx, i - start_idx);
		}
	}
	arr[i] = 0;
	return (arr);
}
