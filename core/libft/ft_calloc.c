/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 13:06:01 by huahmad           #+#    #+#             */
/*   Updated: 2024/08/19 11:30:02 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*smn;

	smn = (void *)malloc(nmemb * size);
	if (!smn)
		return (NULL);
	ft_bzero(smn, nmemb * size);
	return (smn);
}
// int	main (void)
// {
// 	int i = 0;
// 	int *a;

// 	a = (int*)ft_calloc(0, 0);
// 	while (i < 3)
// 	{
// 		scanf("%d",&a[i]);
// 		i++;
// 	}
// 	printf("The numbers entered are: ");
// 	for(i = 0 ; i < 3 ; i++ )
// 		printf("%d ",a[i]);
// 	free( a );

// 	return(0);
// }
