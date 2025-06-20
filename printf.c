/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chantas <chantas@student.42istanbul.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 20:25:35 by chantas           #+#    #+#             */
/*   Updated: 2025/06/20 22:39:00 by chantas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static void	ft_write(const char *s, int *i)
{
	while (*s != '%')
	{
		write(1, s, 1);
		s++;
		(*i)++;
	}
}
int	ft_printf(const char *s, ...)
{
	int	i;
	va_list	args;

	i = 0;
	va_start(args, s);
	ft_write(s, &i);
	return (i);
}
