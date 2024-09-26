/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 12:22:02 by huahmad           #+#    #+#             */
/*   Updated: 2024/05/29 14:36:47 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	idk;
	unsigned int	a;
	unsigned int	b;

	idk = 0;
	while (little[idk])
		++idk;
	if (idk == 0)
		return ((char *)big);
	a = 0;
	b = 0;
	while (big[b] != '\0' && b < len)
	{
		if (big[b] == little[0])
		{
			a = 1;
			while (little[a] != '\0' && big[b + a] == little[a]
				&& (size_t)(b + a) < len)
				a++;
			if (little[a] == '\0')
				return ((char *) &big[b]);
		}
		b++;
	}
	return (0);
}
// int	main(void)
// {
// 	const char *large = "who got the answers";
// 	const char *small = "ot";
// 	printf("%s\n", ft_strnstr(large, small, 15));
// 	return (0);
// }
