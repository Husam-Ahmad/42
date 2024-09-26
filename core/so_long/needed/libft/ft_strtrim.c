/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 13:45:41 by huahmad           #+#    #+#             */
/*   Updated: 2024/08/19 11:07:42 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	n;

	n = 0;
	while (s[n] != '\0')
	{
		++n;
	}
	return (n);
}

static size_t	check(const char *smn, const char c)
{
	int	i;

	i = 0;
	if (!smn)
		return (0);
	while (smn[i])
	{
		if (smn[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char *s1, char const *set)
{
	int		start;
	int		end;
	int		q;
	char	*trimmed;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && check(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && s1[end - 1] && check(set, s1[end - 1]))
		end--;
	trimmed = malloc(sizeof(char) * (end - start + 1));
	if (!trimmed)
		return (NULL);
	q = 0;
	while (start < end)
	{
		trimmed[q] = s1[start];
		start++;
		q++;
	}
	trimmed[q] = '\0';
	return (trimmed);
}
// int	main(void)
// {
// // s = ft_strtrim("   xxx   xxx", " x");
// 	char str1[] = "   xxx   xxx";
// 	char set1[] = " x";
// 	char *trimmed1 = ft_strtrim(str1, set1);
// 	printf("%s\n", trimmed1);
// 	// free(trimmed1);

// 	// char str2[] = " \t\t Welcome to the Jungle \t ";
// 	// char set2[] = " \t";
// 	// char *trimmed2 = ft_strtrim(str2, set2);
// 	// printf("%s\n", trimmed2);
// 	// // free(trimmed2);

// 	// char str3[] = "NoTrimmingNeeded"; char set3[] = " ";
// 	// char *trimmed3 = ft_strtrim(str3, set3);
// 	// printf("%s", trimmed3);
// 	// // free(trimmed3);
// 	return (0);
// }
// int main(void)
// {
//     // printf("1 case:%s\n", ft_strtrim("", ""));
//     // // printf("\n");
//     // printf("2 case:%s\n", ft_strtrim(" ", ""));
//     // printf("3 case:%s\n", ft_strtrim("Hello, World!", " "));
//     // printf("4 case:%s\n", ft_strtrim(" Hello", " "));
//     // printf("5 case:%s\n", ft_strtrim("Hello ", " "));
//     // printf("6 case:%s\n", ft_strtrim(" Hello, World! ", " "));
//     // printf("7 case:%s\n", ft_strtrim("\t\n Hello, World! \r\n", " "));
//     // printf("8 case:%s\n", ft_strtrim("", NULL));
//     // printf("9 case:%s\n", ft_strtrim(" a ", " "));
//     printf("10 case:%s\n", ft_strtrim("    ", " "));
//     // printf("11 case:%s\n", ft_strtrim(NULL, NULL));
// }
