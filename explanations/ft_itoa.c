/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysar@student.42kl.edu.my <ysar>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:01:52 by ysar@studen       #+#    #+#             */
/*   Updated: 2022/11/07 14:47:35 by ysar@studen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

//This math in for how many digits
static int	ft_digitslen(int nbr)
{
	size_t	digits;

	digits = (nbr <= 0); //If it's negative value, or it's negative = 1; else 0
	while (nbr != 0)
	{
		//Be it -123, or 123 > yields 3 digits cuz we divide until 0
		nbr = nbr / 10;
		++digits;
	}
	return (digits);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	nb;

	if (n == 0)
		return (ft_strdup("0")); //If zero, returns right away.
	len = ft_digitslen(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!(str))
		return (NULL);
	str[len--] = '\0';
	nb = n; //Convert it to a long type
	if (nb < 0)
	{
		str[0] = '-';
		nb *= -1; //Invert the digit first so we can do division
	}
	while (nb > 0)
	{
		str[len--] = nb % 10 + '0';
		nb /= 10; //Conversion from right to left
	}
	return (str);
}
