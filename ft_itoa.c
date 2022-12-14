/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysar@student.42kl.edu.my <ysar>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:01:52 by ysar@studen       #+#    #+#             */
/*   Updated: 2022/11/07 16:02:47 by ysar@studen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_digitslen(int nbr)
{
	size_t	digits;

	digits = (nbr <= 0);
	while (nbr != 0)
	{
		nbr = nbr / 10;
		++digits;
	}
	return (digits);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	long	nb;

	if (n == 0)
		return (ft_strdup("0"));
	len = ft_digitslen(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!(str))
		return (NULL);
	str[len--] = '\0';
	nb = n;
	if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
	}
	while (nb > 0)
	{
		str[len--] = nb % 10 + '0';
		nb /= 10;
	}
	return (str);
}
