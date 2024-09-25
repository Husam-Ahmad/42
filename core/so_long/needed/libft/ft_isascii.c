/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 14:28:36 by huahmad           #+#    #+#             */
/*   Updated: 2024/06/13 20:49:21 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>
// #include <ctype.h>
#include "libft.h"

int	ft_isascii(int s)
{
	if (s > -1 && s < 128)
		return (1);
	return (0);
}
// int	main(void)
// {
// 	printf("%d\n", ft_isascii(']'));
// 	printf("%d\n", isascii(']'));
// 	return (0);
// }
