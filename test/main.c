/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysar@student.42kl.edu.my <ysar>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:41:48 by ysar@studen       #+#    #+#             */
/*   Updated: 2022/11/09 15:03:03 by ysar@studen      ###   ########.fr       */
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

// int main()
// {
// 	// char **tab = ft_split("tripouille", 0);
// 	char	**expected = (char*[6]){"split", "this", "for", "me", "!", NULL};
// 	char *s = "      split       this for   me  !       ";
// 	char **result = ft_split(s, ' ');
// 	char *check;
// 	while (*result)
// 	{
// 		check = *result;
// 		if (strcmp(*result, *expected))
// 		{
// 			s = "failed";
// 		}
// 		result++;
// 		expected++;
// 	}
// }

// int	main()
// {
// 	t_list	*l = NULL;
// 	t_list	*expected = NULL;
// 	t_list	*actual = NULL;
// 	t_list *n = ft_lstnew(strdup("OK"));
// 	ft_lstadd_back(&l, n);
// 	if (l == n && !strcmp(l->content, "OK"))
// 	{
// 		free(l->next);
// 		free(l);
// 		printf("Success");
// 	}
// 	free(l->next);
// 	free(l);
// 	printf("Failed didn't enter above");
// }

int				__delNum = 0;
void			lstdel_f(void *lst) {
	(void)lst;
	__delNum++;
}
void *		lstmap_f(void *content) {
	(void)content;
	return ("OK !");
}
int main()
{
	t_list	*l = lstnew(strdup(" 1 2 3 "));
	t_list	*ret;

	l->next = lstnew(strdup("ss"));
	l->next->next = lstnew(strdup("-_-"));
	// ret = ft_lstmap(l, lstmap_f, NULL);  // del may be necessary to use
	ret = ft_lstmap(l, lstmap_f, lstdel_f); // or lstdelone_f
	if (!strcmp(ret->content, "OK !") && !strcmp(ret->next->content, "OK !") && !strcmp(ret->next->next->content, "OK !") && !strcmp(l->content, " 1 2 3 ") && !strcmp(l->next->content, "ss") && !strcmp(l->next->next->content, "-_-"))
		printf("Success");
	SET_DIFF(" 1 2 3 ", l->content);
	printf("Failed");
}