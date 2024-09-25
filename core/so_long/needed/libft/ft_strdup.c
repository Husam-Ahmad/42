/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 19:53:31 by huahmad           #+#    #+#             */
/*   Updated: 2024/05/30 13:06:19 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdlib.h>
// #include <stdio.h>
#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*ha;
	int		i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	ha = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (src[i])
	{
		ha[i] = src[i];
		i++;
	}
	ha[i] = '\0';
	return (ha);
}
// int main(void)
// {
// 	char	*str;
// 	char	*new_str;
// 	str = "malloc Sucks";
// 	new_str = "maybe it doesn't";
// 	new_str = ft_strdup(str);
// 	printf("%s\n", new_str);
// }
