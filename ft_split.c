/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysar@student.42kl.edu.my <ysar>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 17:34:57 by ysar@studen       #+#    #+#             */
/*   Updated: 2022/11/05 17:49:23 by ysar@studen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int ft_count_words(char *str, char c)
{
	size_t i;
	size_t count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && ft_instr(str[i], &c))
			i++;
		if (str[i] != '\0' && !ft_instr(str[i], &c))
			count++;
		while (str[i] != '\0' && !ft_instr(str[i], &c))
			i++;
	}
	return (count);
}

char *ft_dup_sep(char *str, char c)
{
	size_t i;
	char *word;

	i = 0;
	while (str[i] != '\0' && !ft_instr(str[i], &c))
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	if (!(word))
		return (NULL);
	ft_memmove(word, str, i);
	word[i] = '\0';
	return (word);
}

char    **ft_split(const char *s, char c)
{
	size_t i;
	size_t count;
	char **arr;

	count = ft_count_words(s, c);
	arr = (char **)malloc(sizeof(char *) * (count + 1));
	if (!(arr))
		return (NULL);
	i = 0;
	while (*s != '\0')
	{
		while (*s != '\0' && ft_instr(*s, &c))
			s++;
		if (*s != '\0' && !ft_instr(*s, &c))
		{
			arr[i] = ft_dup_sep(s, c);
			i++;
		}
		while (*s != '\0' && !ft_instr(*s, &c))
			s++;
	}
	arr[i] = 0;
	return (arr);
}

