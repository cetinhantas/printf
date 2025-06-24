/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chantas <chantas@student.42istanbul.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 18:10:09 by chantas           #+#    #+#             */
/*   Updated: 2025/06/24 18:23:58 by chantas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

void	ft_print_c(char c, int *i);
void	ft_print_str(char *str, int *i);
void	ft_print_p(void *p, int *i);
void	ft_print_hex(unsigned int n, int *i);
void	ft_print_num(int n, int *i);
void	ft_print_uint(unsigned int n, int *i);
void	ft_check_fs(char c, int *i);
