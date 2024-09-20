/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:00:56 by huahmad           #+#    #+#             */
/*   Updated: 2024/05/30 16:01:17 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>
// #include <ctype.h>
// #include <strings.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *) s;
	while (n-- > 0)
		*ptr++ = 0;
}
// int	main(void)
// {
// 	char	l[20] = "ok now we talkin";
// 	char	w[20] = "ok now we talkin";
// 	ft_bzero(l, 1);
// 	bzero(w, 1);
// 	printf("%s\n",l);
// 	printf("%s\n",w);
// 	return (0);
// }
