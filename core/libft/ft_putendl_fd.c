/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 20:10:27 by huahmad           #+#    #+#             */
/*   Updated: 2024/06/16 13:16:28 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <string.h>

void	ft_putendl_fd(char *str, int fd)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(fd, &str[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
// int	main(void)
// {
// 	char str[] = "Hello, World!";
// 	ft_putendl_fd(str, -1);

// 	char error[] = "Error: File not found";
// 	ft_putendl_fd(error, 2);

// 	ft_putendl_fd("Hello", 0);
// 	return (0);
// }
