/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 18:44:20 by huahmad           #+#    #+#             */
/*   Updated: 2024/06/13 18:54:45 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*smn;

	if (!s)
		return (NULL);
	i = 0;
	smn = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (smn == NULL)
		return (NULL);
	while (s[i])
	{
		smn[i] = f(i, s[i]);
		i++;
	}
	smn[i] = '\0';
	return (smn);
}
//  char smn(unsigned int i, char s)
// {
// 	printf("im so smart: index = %d and %c\n", i, s);
// 	return s - 32;
// }

// int main(void)
// {
// 	char str[10] = "hello.";
// 	printf("The result is %s\n", str);
// 	char *result = ft_strmapi(str, smn);
// 	printf("The result is %s\n", result);
// 	return 0;
// }
