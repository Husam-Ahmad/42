/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 15:14:52 by huahmad           #+#    #+#             */
/*   Updated: 2024/05/29 14:39:04 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>
// #include <ctype.h>
// #include <string.h>
#include "libft.h"

void	*ft_memset(void *start, int replace, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *) start;
	if (len == 0)
		return (start);
	while (len-- > 0)
		*ptr++ = (unsigned char)replace;
	return (start);
}
// int	main(void)
// {
// 	char something[] = "what is your name?";
// 	char some[] = "what is your name?";
// 	printf("before: %s\n", something);
// 	ft_memset(something, '5', 0);
// 	printf("after: %s\n", something);
// 	memset(some, '5', (0));
// 	printf("after: %s\n", some);
// 	return (0);
// }
