/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysar@student.42kl.edu.my <ysar>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:22:11 by ysar@studen       #+#    #+#             */
/*   Updated: 2022/11/07 15:22:12 by ysar@studen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		nb *= -1;
		ft_putchar_fd('-', fd);
	}
	if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putchar_fd('0' + nb % 10, fd);
	}
	else
		ft_putchar_fd('0' + nb % 10, fd);
}

// My very elegant code then I realized "fuck, cannot malloc"
// ```
// void ft_putnbr_fd(int n, int fd)
// {
// 	char *str;
// 	str = ft_itoa(n);
// 	ft_putstr_fd(str, fd);
// }
// ```
