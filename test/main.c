/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysar@student.42kl.edu.my <ysar>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:41:48 by ysar@studen       #+#    #+#             */
/*   Updated: 2022/11/09 16:47:58 by ysar@studen      ###   ########.fr       */
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

// int				__delNum = 0;
// void			lstdel_f(void *lst) {
// 	(void)lst;
// 	__delNum++;
// }
// void *		lstmap_f(void *content) {
// 	(void)content;
// 	return ("OK !");
// }
// int main()
// {
// 	t_list	*l = lstnew(strdup(" 1 2 3 "));
// 	t_list	*ret;

// 	l->next = lstnew(strdup("ss"));
// 	l->next->next = lstnew(strdup("-_-"));
// 	// ret = ft_lstmap(l, lstmap_f, NULL);  // del may be necessary to use
// 	ret = ft_lstmap(l, lstmap_f, lstdel_f); // or lstdelone_f
// 	if (!strcmp(ret->content, "OK !") && !strcmp(ret->next->content, "OK !") && !strcmp(ret->next->next->content, "OK !") && !strcmp(l->content, " 1 2 3 ") && !strcmp(l->next->content, "ss") && !strcmp(l->next->next->content, "-_-"))
// 		printf("Success");
// 	SET_DIFF(" 1 2 3 ", l->content);
// 	printf("Failed");
// }

int	main()
{
	//https://stackoverflow.com/questions/19367881/how-much-memory-calloc-and-malloc-can-allocate
	//Max is max size of size_t, so we just get their max size for failsafe
	printf("%p:%p\n",ft_calloc(SIZE_MAX, SIZE_MAX), calloc(SIZE_MAX, SIZE_MAX));
	printf("#2 %p: %p\n", ft_calloc(SIZE_MAX, 1), calloc(SIZE_MAX, 1));
	printf("#3 %p: %p\n", ft_calloc(1, SIZE_MAX), calloc(1, SIZE_MAX));
	printf("#4 %p: %p\n", ft_calloc(100, SIZE_MAX), calloc(100, SIZE_MAX));
	char *string = ft_calloc(1, 10);
	string = 0;
}