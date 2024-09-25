/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 19:15:29 by huahmad           #+#    #+#             */
/*   Updated: 2024/05/30 18:13:48 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		neg;
	int		o;
	int		sign;

	neg = 1;
	i = 0;
	o = 0;
	sign = 0;
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			neg *= -1;
		sign++;
		if (sign > 1)
			return (0);
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		o = (o * 10) + (str[i] - '0');
		i++;
	}
	return (o * neg);
}
// int main(void)
// {
// 	char *s = "-54";

// 	printf("ft_atoi(\"%s\") = %d\n", s, ft_atoi(s));
// 	return 0;
// }
