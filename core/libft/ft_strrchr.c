/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 15:38:23 by huahmad           #+#    #+#             */
/*   Updated: 2024/06/16 12:05:58 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>
// #include <ctype.h>
// #include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*l;

	l = 0;
	while (*s)
	{
		if (*s == (char)c)
			l = s;
		++s;
	}
	if (*s == (char)c)
		return ((char *)s);
	else
		return ((char *)l);
}
// int	main(void)
// {
// 	const char	i[] = "searching for something";
// 	char		r = '\0';
// 	char *ret;

// 	ret = strrchr(i, r);
// 	printf("String after |%c| is - |%s|\n", r, ret);
// }
