/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chantas <chantas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 16:42:45 by chantas           #+#    #+#             */
/*   Updated: 2025/06/28 00:16:36 by chantas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	ft_print_str(char *str, int *i)
{
	if (!str)
	{
		ft_print_str("(null)", i);
		return ;
	}
	while (*str)
	{
		write(1, str, 1);
		str++;
		(*i)++;
	}
}
