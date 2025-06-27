/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chantas <chantas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 19:58:40 by chantas           #+#    #+#             */
/*   Updated: 2025/06/27 20:45:13 by chantas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	ft_print_int(int n, int *i)
{
	if (n == -2147483648)
	{
		ft_print_str("-2147483648", i);
	}
	else if (n < 0)
	{
		ft_print_c('-', i);
		n = -n;
	}
	else if (n > 9)
	{
		ft_print_int(n / 10, i);
		ft_print_int(n % 10, i);
	}
	else
	{
		ft_print_c(n + 48, i);
	}
}
