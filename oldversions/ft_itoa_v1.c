/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysar@student.42kl.edu.my <ysar>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:01:52 by ysar@studen       #+#    #+#             */
/*   Updated: 2022/11/07 13:00:12 by ysar@studen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_int_strlen(int nbr)
{
	long nb;
	int len;

	//idx 0123
	//-100\0  < need 4 digit; excluding null
	nb = nbr;

	//If zero '0', only 1 len '0'
	if (nb == 0)
		return (1);
	
	//Now, let's start calculating length
	len = 0;

	//Whenever negative +1 length
	if (nb < 0)
	{
		nb *= -1;
		len += 1;
	}

	//Whenever still got digit, +1 len
	while (nb > 0)
	{
		len += 1;
		nb /= 10;
	}

	return (len);
}

char	*ft_itoa(int n)
{
	char *str;
	int len;
	long nb;
	
	//Malloc & create size of the length
	len = ft_int_strlen(n);
	str = malloc(sizeof(char) * (len + 1));
	//printf("test len %d n %d\n", len, n);
	
	//If fail to create, return NULL
	if (!(str))
		return (NULL);
	str[len] = '\0';  //Terminate ending with null
	len--; //Move index one before
	
	//If zero, return '0'
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}

	//If negative, put negative at first slot
	nb = n;
	if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
	}

	//While still got digit left, store number
	while (nb > 0)
	{
		str[len] = nb % 10 + '0';
		nb /= 10;
		len--;

		//123 % 10 = 3; 123 / 10 = 12
		//12 % 10 = 2; 12 / 10 = 1
		//1 % 10 = 1; 1/ 10 = 0
	}
	return (str);
}
