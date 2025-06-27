/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_fs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chantas <chantas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 16:15:49 by chantas           #+#    #+#             */
/*   Updated: 2025/06/28 00:52:39 by chantas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	ft_check_fs(char c, int *i, va_list args)
{
	void	*ptr;

	if (c == 'c')
		ft_print_c(va_arg(args, int), i);
	if (c == 's')
		ft_print_str(va_arg(args, char *), i);
	if (c == 'd' || c == 'i')
		ft_print_int(va_arg(args, int), i);
	if (c == 'x')
		ft_print_hex(va_arg(args, unsigned int), 0, 16, i);
	if (c == 'X')
		ft_print_hex(va_arg(args, unsigned int), 1, 16, i);
	if (c == 'u')
		ft_print_hex(va_arg(args, unsigned int), 0, 10, i);
	if (c == 'p')
	{
		ptr = va_arg(args, void *);
		if (!ptr)
			ft_print_str("(nil)", i);
		else
		{
			ft_print_str("0x", i);
			ft_print_hex((unsigned long long)ptr, 0, 16, i);
		}
	}
}
