/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:33:35 by huahmad           #+#    #+#             */
/*   Updated: 2024/05/30 16:52:17 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*ptr;
	const unsigned char	*ptr2;
	size_t				i;

	i = 0;
	ptr = (unsigned char *) dest;
	ptr2 = (unsigned char *) src;
	while (i < n)
	{
		ptr[i] = ptr2[i];
		i++;
	}
	return (ptr);
}
// int main ()
// {
// 	const char src[50] = "lo que tiene";
// 	char dest[50];

// 	strcpy(dest,"yebba");
// 	printf("Before memcpy dest = %s\n", dest);
// 	memcpy(dest, src, strlen(src)+1);
// 	printf("After memcpy dest = %s\n", dest);
// 	return(0);
// }
