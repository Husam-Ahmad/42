/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_converter.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 15:04:59 by huahmad           #+#    #+#             */
/*   Updated: 2024/07/09 18:46:55 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ifnumber(int n, int *length)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		(*length) += 11;
		return ;
	}
	if (n < 0)
	{
		ifchar('-', length);
		ifnumber(n * -1, length);
	}
	else
	{
		if (n > 9)
			ifnumber(n / 10, length);
		ifchar(n % 10 + '0', length);
	}
}

void	ifchar(char character, int *length)
{
	write(1, &character, 1);
	(*length)++;
}

void	ifstring(char *args, int *length)
{
	size_t	i;

	i = 0;
	if (!args)
	{
		write(1, "(null)", 6);
		(*length) += 6;
		return ;
	}
	while (args[i])
	{
		ifchar(args[i], length);
		i++;
	}
}
