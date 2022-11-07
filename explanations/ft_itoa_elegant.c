/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_elegant.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysar@student.42kl.edu.my <ysar>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:28:47 by schuah            #+#    #+#             */
/*   Updated: 2022/11/07 14:51:37 by ysar@studen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
** Find this elegant, but not as readable.
** So I still separated the functions a bit.
*/

char	*ft_itoa(int n)
{
	size_t		i;
	long int	an;
	char		*output;

	an = n;
	i = (n <= 0);
	while (n != 0 && ++i > 0)
		n = n / 10;
	output = malloc(sizeof(char) * (i + 1));
	if (output == NULL)
		return (NULL);
	if (an < 0)
		output[0] = '-';
	if (an < 0)
		an *= -1;
	output[i--] = '\0';
	if (an == 0)
		output[0] = 48;
	while (an)
	{
		output[i--] = (an % 10) + '0';
		an /= 10;
	}
	return (output);
}

int	main()
{
	char str = ft_itoa(-123);
	int o=0;
}
