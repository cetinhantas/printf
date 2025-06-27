/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chantas <chantas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 20:15:35 by chantas           #+#    #+#             */
/*   Updated: 2025/06/27 16:09:58 by chantas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *s, ...)
{
	int		i;
	va_list	args;

	i = 0;
	va_start(args, s);
	while (*s)
	{
		if (*s == '%')
		{
			ft_check_fs(s[1], &i, args);
			s += 2;
		}
		else
		{
			write(1, s, 1);
			i++;
			s++;
		}
	}
	va_end(args);
	return (i);
}
