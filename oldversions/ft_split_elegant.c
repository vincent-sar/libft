#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	size_t	l;

	l = 0;
	while (str[l])
		l++;
	return (l);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	i = 0;
	if (src < dst)
	{
		i = len - 1;
		while (i > 0)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	else
	{
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
}

void	*ft_strdup(const char *str)
{
	char *dst;
	size_t len;
	
	len = ft_strlen(str);
	dst = malloc(sizeof(char) * len + 1);
	if (!dst)
		return (0);
	ft_memmove(dst, str, len + 1);
	return (dst);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t s_len;

	str = malloc(sizeof(char) * len + 1);
	if (!s || !str)
		return (0);
	if (start + len > s_len)
		len = s_len - start;
	ft_memmove(str, s + start, len);
	str[len] = '\0';
	return (str);
}

int	word_count(char const *s, char c)
{
	int	word_count;
	int	i;

	i = 0;
	word_count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			word_count++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (word_count);
}

char	**ft_split(char const *s, char c)
{
	char	**main;
	int		i;
	int		array;
	int		first_c;

	i = 0;
	array = 0;
	if (!s)
		return (NULL);
	main = malloc(word_count(s, c) + 1);
	if (!main)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			first_c = i;
			while (s[i] != c && s[i] != '\0')
				i++;
			ft_substr(s, first_c, i - first_c);
			main[array++] = ft_strdup(ft_substr(s, first_c, i - first_c));
		}
	}
	main[array] = NULL;
	return (main);
}

int	main(void)
{
	int		i;
	char	**array;
	int		arrlen;

	char test[] = " iM1u egxQfhmOQ8GKA8X xkGFId6E5  feaw";
	i = 0;
	array = ft_split(test, " ");
/*
** 	arrlen = arr_len(array);
** 	while (i < arrlen)
** 	{
** 		printf("%s\n", array[i]);
** 		i++;
** 	}
*/
}
