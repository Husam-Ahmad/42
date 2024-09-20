/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 20:40:51 by huahmad           #+#    #+#             */
/*   Updated: 2024/05/30 12:38:01 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s1 + i) != *(unsigned char *)(s2 + i))
			return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
		i++;
	}
	return (0);
}
// int main(void)
// {
// 	const char *str1 = "visual studio code";
// 	const char *str2 = "activities";
// 	const char *str3 = "Hello, world!";
// 	int result;

// 	result = ft_memcmp(str1, str2, 10);
// 	printf("Test 1 - Result: %d\n", result);

// 	result = ft_memcmp(str1, str3, 10);
// 	printf("Test 2 - Result: %d\n", result);
// }
