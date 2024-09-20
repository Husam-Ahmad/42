/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 12:22:18 by huahmad           #+#    #+#             */
/*   Updated: 2024/06/29 19:56:55 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		else
			++s;
	}
	if (*s == (char)c)
		return ((char *)s);
	else
		return (NULL);
}
// int	main(void)
// {
// 	const char	i[] = "searching for something";
// 	char		r = 'r';
// 	char *ret;

// 	ret = ft_strchr(i, 't' + 256);
// 	printf("String after |%c| is - |%s|\n", r, ret);
// 	ret = strchr(i, 't' + 256);
// 	printf("String after |%c| is - |%s|\n", r, ret);
// }
