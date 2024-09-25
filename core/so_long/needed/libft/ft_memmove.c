/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:04:28 by huahmad           #+#    #+#             */
/*   Updated: 2024/05/23 17:46:48 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>
// #include <ctype.h>
// #include <string.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*desti;
	const unsigned char	*srci;
	size_t				i;

	i = 0;
	desti = (unsigned char *)dest;
	srci = (unsigned char *)src;
	if (srci < desti)
	{
		i = n;
		while (i-- > 0)
		{
			((unsigned char *)desti)[i] = ((unsigned char *)srci)[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)desti)[i] = ((unsigned char *)srci)[i];
			i++;
		}
	}
	return (desti);
}
// int main(void)
// {
// 	char src[20] = "Marhaba Bitches";
// 	char dest[20];

// 	// printf("Before): src = %s, dest = %s\n", src, dest);
// 	// memmove(dest, src, strlen(src) + 1);
// 	// printf("After memmove (non-overlapping):
// src = %s, dest = %s\n", src, dest);

// 	strcpy(src, "Marhaba Bitches");
// 	printf("Before memmove (overlapping, dest > src): src = %s\n", src);
// 	ft_memmove(src + 5, src, strlen(src) + 1);
// 	printf("After memmove (overlapping, dest > src): src = %s\n", src);

// 	strcpy(src, "Marhaba Bitches");
// 	printf("Before memmove (overlapping, dest < src): src = %s\n", src);
// 	ft_memmove(src, src + 5, strlen(src + 5) + 1);
// 	printf("After memmove (overlapping, dest < src): src = %s\n", src);

// 	return 0;
// }
// // Before memmove (overlapping, dest < src): src = Marhaba Bitches
// // After memmove (overlapping, dest < src): src = MarhaMarhaba Bitches
// // Before memmove (overlapping, dest > src): src = Marhaba Bitches
// // After memmove (overlapping, dest > src): src = ba Bitches
