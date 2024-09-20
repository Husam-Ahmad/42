/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 12:56:10 by huahmad           #+#    #+#             */
/*   Updated: 2024/07/03 15:05:24 by huahmad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>
# include <stdio.h>

int			ft_printf(const char *string, ...);
void		ifnumber(int n, int	*length);
void		ifchar(char character, int	*length);
void		ifstring(char	*args, int	*length);
void		ifunint(unsigned int u, int	*length);
void		ifpointer(size_t pointer, int	*length);
void		ifhexa(unsigned int x, int *length, char x_or_X);
void		ft_printf_checker(char s, va_list	*args, int	*len);

#endif
