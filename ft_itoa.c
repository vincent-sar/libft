/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysar@student.42kl.edu.my <ysar>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:01:52 by ysar@studen       #+#    #+#             */
/*   Updated: 2022/11/05 18:08:18 by ysar@studen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_int_strlen(int nbr)
{
	long	nb;
	int		len;

	nb = nbr;
	if (nb == 0)
		return (1);
	len = 0;
	if (nb < 0)
	{
		nb *= -1;
		len += 1;
	}
	while (nb > 0)
	{
		len += 1;
		nb /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	nb;

	len = ft_int_strlen(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!(str))
		return (NULL);
	str[len] = '\0';
	len--;
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	nb = n;
	if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
	}
	while (nb > 0)
	{
		str[len] = nb % 10 + '0';
		nb /= 10;
		len--;
	}
	return (str);
}
