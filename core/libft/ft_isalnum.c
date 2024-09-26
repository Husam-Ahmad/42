/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 13:16:50 by huahmad           #+#    #+#             */
/*   Updated: 2024/05/30 16:04:53 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>
// #include <ctype.h>
#include "libft.h"

int	ft_isalnum(int s)
{
	if ((s >= '0' && s <= '9') || (s >= 'a' && s <= 'z')
		|| (s >= 'A' && s <= 'Z'))
		return (1);
	else
		return (0);
}
// int	main(void)
// {
// 	printf("1: %d\n", isalnum('8'));
// 	printf("1: %d\n", ft_isalnum('8'));
// 	printf("2: %d\n", isalnum('a'));
// 	printf("2: %d\n", ft_isalnum('a'));
// 	printf("3: %d\n", isalnum('A'));
// 	printf("3: %d\n", ft_isalnum('A'));
// 	printf("4: %d\n", isalnum('+'));
// 	printf("4: %d\n", ft_isalnum('+'));
// 	return (0);
// }
