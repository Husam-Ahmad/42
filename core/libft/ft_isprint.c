/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 14:30:57 by huahmad           #+#    #+#             */
/*   Updated: 2024/05/30 16:06:14 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>
// #include <ctype.h>
#include "libft.h"

int	ft_isprint(int s)
{
	if (s >= 32 && s <= 126)
		return (1);
	else
		return (0);
}
// int	main(void)
// {
// 	printf("%d\n", ft_isprint(' '));
// 	printf("%d\n", isprint(' '));
// 	printf("%d\n", ft_isprint('d'));
// 	printf("%d\n", isprint('d'));
// 	printf("%d\n", ft_isprint('/'));
// 	printf("%d\n", isprint('/'));
// 	printf("%d\n", ft_isprint('0'));
// 	printf("%d\n", isprint('0'));
// 	return(0);
// }
