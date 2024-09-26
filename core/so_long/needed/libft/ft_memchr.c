/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 20:07:39 by huahmad           #+#    #+#             */
/*   Updated: 2024/05/29 20:40:35 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*idk;

	i = 0;
	idk = (unsigned char *)s;
	while (i < n)
	{
		if (*idk == (unsigned char) c)
		{
			return ((void *)idk);
			idk--;
		}
		idk++;
		i++;
	}
	return (0);
}
// int	main(void)
// {
// 	char	*something = "something else";
// 	char	some = 'e';
// 	printf("%p\n", memchr(something, some, 7));
// 	printf("%p\n", ft_memchr(something, some, 7));
// 	return (0);
// }
