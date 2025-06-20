/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chantas <chantas@student.42istanbul.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 20:13:01 by chantas           #+#    #+#             */
/*   Updated: 2025/06/20 22:40:31 by chantas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef "PRINTF_H"
# define "PRINTF_H"

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

typedef void	(*ft_printc)(char, int *);
typedef	void	(*ft_prints)(char *, int *);
typedef void	(*ft_printp)(void *, int *);
typedef void	(*ft_printd)(double, int *);
typedef	void	(*ft_printi)(int, int *);
typedef void	(*ft_printu)(unsigned double, int *);
typedef void	(*ft_printx)(size_t num, int *);

typedef struct s_list
{
	ft_printc	c;
	ft_prints	s;
	ft_printp	p;
	ft_printd	d;
	ft_printi	i;
	ft_printu	u;
	ft_printx	x;
}		t_func;

int	ft_printf(const char *s, ...);

#endif
