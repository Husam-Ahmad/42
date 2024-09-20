/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 14:11:06 by huahmad           #+#    #+#             */
/*   Updated: 2024/05/30 16:05:55 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>
#include "libft.h"

int	ft_isdigit(int s)
{
	if (s >= '0' && s <= '9')
		return (1);
	else
		return (0);
}
// int	main(void)
// {
// 	printf("%d\n", ft_isdigit('w'));
// 	return (0);
// }
