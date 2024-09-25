/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 12:36:17 by huahmad           #+#    #+#             */
/*   Updated: 2024/09/17 15:17:00 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	left = ft_substr_gnl(line_buffer, o + 1, ft_strlen_gnl(line_buffer) - o);
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
			left = ft_strdup_gnl("");
		tmp = left;
		left = ft_strjoin_gnl(tmp, buffer);
		free(tmp);
		tmp = NULL;
		if (ft_strchr_gnl(buffer, '\n'))
			break ;
	}
	return (left);
}

char	*ft_strchr_gnl(const char *s, int c)
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
	static char	*smn[1024];
	char		*line;

	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (fd < 0 || BUFFER_SIZE <= 0)
	{
		free(smn[fd]);
		free(buffer);
		smn[fd] = NULL;
		buffer = NULL;
		return (NULL);
	}
	if (!buffer)
		return (NULL);
	line = fill_line(fd, smn[fd], buffer);
	free(buffer);
	smn[fd] = set_it(line);
	return (line);
}

// int	main()
// {
// 	int	fd1;
// 	int	fd2;

// 	fd2 = open("test.txt", O_RDONLY);
// 	// fd1 = open("text.txt", O_RDONLY);
// 	// printf("%s\n", get_next_line(fd1));
// 	printf("%s", get_next_line(fd2));
// 	// printf("%s\n", get_next_line(fd1));
// 	printf("%s", get_next_line(fd2));
// 	// printf("%s\n", get_next_line(fd1));
// 	printf("%s", get_next_line(fd2));
// 	// printf("%s\n", get_next_line(fd1));
// 	printf("%s", get_next_line(fd2));
// 	return 0;
// }
