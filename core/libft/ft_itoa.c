/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 17:31:36 by huahmad           #+#    #+#             */
/*   Updated: 2024/06/16 16:27:27 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	count(int d)
{
	int	digit;

	digit = 0;
	if (d < 0)
	{
		digit++;
		d *= -1;
	}
	while (d > 0)
	{
		d /= 10;
		digit++;
	}
	return (digit);
}

char	*ft_itoa(int n)
{
	char	*smn;
	int		i;

	i = count(n);
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	smn = (char *)malloc(i + 1);
	if (!smn)
		return (NULL);
	if (n < 0)
	{
		*smn = '-';
		n *= -1;
	}
	smn[i--] = 0;
	while (i >= 0 && smn[i] != '-')
	{
		smn[i] = n % 10 + '0';
		n /= 10;
		i--;
	}
	return (smn);
}
// int main(void)
// {
// 	printf("%s\n", ft_itoa(0));
// 	return (0);
// 	// free(s);
// }
