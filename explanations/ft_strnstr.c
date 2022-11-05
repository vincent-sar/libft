#include <unistd.h>
#include <stdio.h>

char	*ft_strstr(const char *str, const char *substr, size_t len)
{
	int	i;
	int	j;

	if (substr[0] == '\0')
		return ((char *)str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == substr[j] && str[i + j] != '\0' && i + j < len)
			j++;
		if (substr[j] == '\0')
			return ((char *)(str + i));
		i++;
	}
	return (0);
}

int main(void)
{
    /* 
    two
    one two three

     two
    one two three

      two
    one two three

       two
    one two three

        two\0 
    one two three
    */
    
    char main_str[] = "one two three";
    char sub_str1[] = "two";
    char sub_str2[] = "not inside";
    char sub_str3[] = "";
    printf("Position %s", ft_strstr(main_str, sub_str1, 13));
    printf("No position %s", ft_strstr(main_str, sub_str2, 13));
    printf("Returned string %s", ft_strstr(main_str, sub_str3, 13));
    printf("Out of space %s", ft_strstr(main_str, sub_str1, 5));
}