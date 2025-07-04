/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chantas <chantas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 18:10:09 by chantas           #+#    #+#             */
/*   Updated: 2025/06/27 21:26:58 by chantas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include "../ft_printf.h"

void	ft_print_c(char c, int *i);
void	ft_print_str(char *str, int *i);
void	ft_print_hex(unsigned long long n, int is_up, int base, int *i);
void	ft_print_int(int n, int *i);
void	ft_check_fs(char c, int *i, va_list args);

#endif
