/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 12:38:01 by huahmad           #+#    #+#             */
/*   Updated: 2024/09/17 15:44:03 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup_gnl(char *s1)
{
	char			*dest;
	unsigned int	i;

	dest = (char *) malloc(ft_strlen_gnl(s1) + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

char	*ft_substr_gnl(char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (!s)
		return (NULL);
	if (start > ft_strlen_gnl(s))
		return (malloc(1));
	if (len > ft_strlen_gnl(s + start))
		len = ft_strlen_gnl(s + start);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = 0;
	return (str);
}

char	*ft_strjoin_gnl(char *s1, char *s2)
{
	char			*smn;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	smn = (char *) malloc((ft_strlen_gnl(s1) + ft_strlen_gnl(s2) + 1) * sizeof(char));
	if (!smn)
		return (NULL);
	while (s1[j])
		smn[i++] = s1[j++];
	j = 0;
	while (s2[j])
		smn[i++] = s2[j++];
	smn[i] = '\0';
	return (smn);
}

size_t	ft_strlen_gnl(char *s)
{
	int	n;

	n = 0;
	while (s[n])
		++n;
	return (n);
}
