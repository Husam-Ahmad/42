/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 19:24:01 by huahmad           #+#    #+#             */
/*   Updated: 2024/06/29 17:00:08 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "libft.h"

int	safe_malloc(char **ptrstr, int position, size_t buffer)
{
	int	i;

	i = 0;
	ptrstr[position] = malloc(buffer);
	if (ptrstr[position] == NULL)
	{
		while (i < position)
			free(ptrstr[i++]);
		free(ptrstr);
		return (1);
	}
	return (0);
}

int	putin(char **ptrstr, char const *s, char delimiter)
{
	int	len;
	int	i;
	int	m;

	m = 0;
	i = 0;
	while (*s)
	{
		len = 0;
		while (*s == delimiter && *s)
			s++;
		while (*s != delimiter && *s)
		{
			len++;
			s++;
		}
		if (len)
			if (safe_malloc(ptrstr, i, len + 1))
				return (1);
		ft_strlcpy(ptrstr[m], s - len, len + 1);
		m++;
		i++;
	}
	return (0);
}
// if not - len then the pointer is at the end

size_t	count(const char *s, char delimiter)
{
	size_t	countem;
	bool	inside;

	countem = 0;
	while (*s)
	{
		inside = false;
		while (*s == delimiter && *s)
			++s;
		while (*s != delimiter && *s)
		{
			if (!inside)
			{
				inside = true;
				countem++;
			}
			s++;
		}
	}
	return (countem);
}

char	**ft_split(char const *s, char c)
{
	size_t	substr;
	char	**ptrstr;

	substr = 0;
	substr = count(s, c);
	ptrstr = malloc((substr + 1) * sizeof(char *));
	if (ptrstr == NULL)
		return (NULL);
	ptrstr[substr] = NULL;
	if (putin(ptrstr, s, c))
		return (NULL);
	return (ptrstr);
}

// int	main(void)
// {
// 	char	*s = "split between spaces ";
// 	char	**idk = ft_split(s, 0);

// 	// while (*idk)
// 	// {
// 		printf("%s\n", idk[0]);
// 		printf("%s\n", idk[1]);
// 		printf("%s\n", idk[2]);
// 		printf("%s\n", idk[3]);
// 	// }
// 	return 0;
// }
