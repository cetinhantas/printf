/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chantas <chantas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 19:50:58 by chantas           #+#    #+#             */
/*   Updated: 2025/06/27 21:28:45 by chantas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	ft_print_hex(unsigned long long n, int is_up, int b, int *i)
{
	unsigned long long	base;
	char				*set;

	base = b;
	set = "0123456789abcdef";
	if (is_up)
		set = "0123456789ABCDEF";
	if (n > base)
	{
		ft_print_hex(n / base, is_up, base, i);
		ft_print_hex(n % base, is_up, base, i);
	}
	else
	{
		ft_print_c(set[n], i);
	}
}
