/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_fs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chantas <chantas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 16:15:49 by chantas           #+#    #+#             */
/*   Updated: 2025/06/27 17:07:24 by chantas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	ft_check_fs(char c, int *i, va_list args)
{
	if (c == '%')
	{
		write(1, "%", 1);
		(*i)++;
	}
	if (c == 'c')
		ft_print_c(va_arg(args, int), i);
	if (c == 's')
		ft_print_str(va_arg(args, char *), i);
}
