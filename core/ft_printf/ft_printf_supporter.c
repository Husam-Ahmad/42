/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_supporter.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 19:44:29 by huahmad           #+#    #+#             */
/*   Updated: 2024/07/11 16:17:39 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ifunint(unsigned int u, int	*length)
{
	if (u >= 10)
		ifunint(u / 10, length);
	ifchar(u % 10 + '0', length);
}

void	ifpointer(size_t pointer, int	*length)
{
	char	string[25];
	int		i;
	char	*base;

	base = "0123456789abcdef";
	if (pointer == 0)
	{
		*length += write(1, "(nil)", 5);
		return ;
	}
	write(1, "0x", 2);
	i = 0;
	*length += 2;
	while (pointer != 0)
	{
		string[i] = base[pointer % 16];
		pointer /= 16;
		i++;
	}
	while (i-- != 0)
	{
		ifchar(string[i], length);
	}
}

void	ifhexa(unsigned int x, int *length, char x_or_X)
{
	char	*base;
	char	string[25];
	int		i;

	if (x_or_X == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	i = 0;
	if (x == 0)
	{
		ifchar('0', length);
		return ;
	}
	while (x != 0)
	{
		string[i] = base [x % 16];
		x = x / 16;
		i++;
	}
	while (i--)
		ifchar(string[i], length);
}
int	main(void)
{
	int	wtvr ;
	int	*ptr = &wtvr;
	ft_printf("Address of pointer: %p\n", ptr);
	printf("Address of wtvr directly: %d\n", 0);
	ft_printf("print this number: %d\n", wtvr);
	ft_printf("print this string: %p\n");
	ft_printf("print this character: %c\n", '0');
	ft_printf("print this character: %%\n");
	ft_printf("print this hexadecimal: %x\n", 100556);
}
