/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 19:42:05 by huahmad           #+#    #+#             */
/*   Updated: 2024/06/08 16:39:50 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

// size_t	ft_strlen(char *str)
// {
// 	int	n;

// 	n = 0;
// 	while (str[n] != '\0')
// 	{
// 		++n;
// 	}
// 	return (n);
// }

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	if (size == 0)
		return (ft_strlen((char *)src));
	i = 0;
	if (!dest)
		return (0);
	while (src[i] && (size - 1) > i)
	{
		dest[i] = src[i];
		i++;
	}
	if (size != 0)
		dest[i] = '\0';
	while (src[i])
		i++;
	return (i);
}
// int	main(void)
// {
// 	char	*one = "something to copy";
// 	// char	dest[50];
// 	printf("%zu\n", ft_strlcpy(dest, one, 9));
// 	printf("%s\n", dest);
// 	// printf("%zu\n", strlcpy(dest, one, 0));
// 	// printf("%s\n", dest);

// 	return (0);
// }
