/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 14:31:01 by huahmad           #+#    #+#             */
/*   Updated: 2024/06/08 16:05:26 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>
// #include <ctype.h>
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	n;

	n = 0;
	while (s[n] != '\0')
	{
		++n;
	}
	return (n);
}
// int main(void)
// {
// 	printf("%zu\n", ft_strlen("hey you!"));
// 	return (0);
// }
