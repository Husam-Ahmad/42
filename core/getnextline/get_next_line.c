/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 11:56:41 by huahmad           #+#    #+#             */
/*   Updated: 2024/07/30 19:22:54 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*set_it(char *line_buffer)
{
	char	*left;
	ssize_t	o;

	o = 0;
	if (line_buffer == NULL)
		return (NULL);
	while ((line_buffer[o] != '\n') && (line_buffer[o] != '\0'))
		o++;
	if (line_buffer[o] == 0)
		return (NULL);
	left = ft_substr(line_buffer, o + 1, ft_strlen(line_buffer) - o);
	if (left == NULL || *left == 0)
	{
		free(left);
		left = NULL;
	}
	line_buffer[o + 1] = 0;
	return (left);
}

static char	*fill_line(int fd, char *left, char *buffer)
{
	ssize_t	alread;
	char	*tmp;

	alread = 1;
	while (1)
	{
		alread = read(fd, buffer, BUFFER_SIZE);
		if (alread == -1)
		{
			free(left);
			return (NULL);
		}
		else if (alread == 0)
			break ;
		buffer[alread] = 0;
		if (!left)
			left = ft_strdup("");
		tmp = left;
		left = ft_strjoin(tmp, buffer);
		free(tmp);
		tmp = NULL;
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	return (left);
}

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

char	*get_next_line(int fd)
{
	char		*buffer;
	static char	*smn;
	char		*line;

	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (fd < 0 || BUFFER_SIZE <= 0)
	{
		free(smn);
		free(buffer);
		smn = NULL;
		buffer = NULL;
		return (NULL);
	}
	if (!buffer)
		return (NULL);
	line = fill_line(fd, smn, buffer);
	free(buffer);
	smn = set_it(line);
	return (line);
}

// int	main()
// {
// 	int	fd;
// 	// char	*str;

// 	fd = open("text.txt", O_RDONLY);
// 	// printf("%s\n", get_next_line(fd));
// 	// printf("%s\n", get_next_line(fd));
// 	// printf("%s\n", get_next_line(fd));
// 	// printf("%s\n", get_next_line(fd));
// 	// printf("%s\n", get_next_line(fd));
// 	// printf("%s\n", get_next_line(fd));
// 	// printf("%s\n", get_next_line(fd));
// 	printf("%s", get_next_line(fd));
// 	return 0;
// }
