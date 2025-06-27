/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chantas <chantas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 20:15:35 by chantas           #+#    #+#             */
/*   Updated: 2025/06/28 00:47:40 by chantas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
			if (s[1] == '%')
				ft_print_c(s[1], &i);
			else
				ft_check_fs(s[1], &i, args);
			s += 2;
		}
		else
		{
			ft_print_c(*s, &i);
			s++;
		}
	}
	va_end(args);
	return (i);
}
