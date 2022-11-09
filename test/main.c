/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysar@student.42kl.edu.my <ysar>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:41:48 by ysar@studen       #+#    #+#             */
/*   Updated: 2022/11/09 14:10:17 by ysar@studen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// int	main()
// {
// 	printf("First round\n");
// 	printf("#1 %s: %s\n", ft_strjoin("", "42"), "42");
// 	printf("#2 %s: %s\n", ft_strjoin("42", ""), "42");
// 	printf("#3 %s: %s\n", ft_strjoin("", ""), "");
// }

int main()
{
	// char **tab = ft_split("tripouille", 0);
	char	**expected = (char*[6]){"split", "this", "for", "me", "!", NULL};
	char *s = "      split       this for   me  !       ";
	char **result = ft_split(s, ' ');
	char *check;
	while (*result)
	{
		check = *result;
		if (strcmp(*result, *expected))
		{
			s = "failed";
		}
		result++;
		expected++;
	}
}
