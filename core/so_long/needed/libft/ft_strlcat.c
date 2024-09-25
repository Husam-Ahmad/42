/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 11:51:39 by huahmad           #+#    #+#             */
/*   Updated: 2024/05/30 16:53:02 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>
// #include <string.h>
#include "libft.h"

// size_t	ft_strlen(const char *str)
// {
// 	int	n;

// 	n = 0;
// 	while (str[n] != '\0')
// 	{
// 		++n;
// 	}
// 	return (n);
// }

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dst);
	j = dest_len;
	i = 0;
	if (dest_len < size - 1 && size > 0)
	{
		while (src[i] && dest_len + i < size - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = 0;
	}
	if (dest_len >= size)
		dest_len = size;
	return (dest_len + src_len);
}

// int	main(void)
// {
// 	char	*one = "something to cat";
// 	char	two[10] = "stre";
// 	printf("%zu\n", ft_strlcat(two, one, 7));
// 	printf("%s\n", two);
// 	// printf("%d\n", strlcat(two, one, 7));
// 	printf("%s\n", two);

// 	return (0);
// }
