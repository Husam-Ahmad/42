/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 14:35:52 by huahmad           #+#    #+#             */
/*   Updated: 2024/07/09 20:22:57 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_checker(char s, va_list	*args, int	*len)
{
	if (s == '%')
	{
		write(1, "%", 1);
		(*len)++;
	}
	else if (s == 'd' || s == 'i')
		ifnumber(va_arg(*args, int), len);
	else if (s == 'c')
		ifchar(va_arg(*args, int), len);
	else if (s == 's')
		ifstring(va_arg(*args, char *), len);
	else if (s == 'u')
		ifunint(va_arg(*args, unsigned int), len);
	else if (s == 'p')
		ifpointer(va_arg(*args, size_t), len);
	else if (s == 'x')
		ifhexa(va_arg(*args, unsigned int), len, 'x');
	else if (s == 'X')
		ifhexa(va_arg(*args, unsigned int), len, 'X');
}

int	ft_printf(const char *string, ...)
{
	va_list	args;
	int		i;
	int		length;

	i = 0;
	length = 0;
	va_start(args, string);
	while (string[i])
	{
		if (string[i] == '%')
		{
			i++;
			ft_printf_checker(string[i], &args, &length);
			i++;
		}
		else
		{
			write(1, &string[i], 1);
			i++;
			length++;
		}
	}
	va_end(args);
	return (length);
}
// printf("whatever something %% fsso", 123);
