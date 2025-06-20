/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chantas <chantas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 01:50:35 by chantas           #+#    #+#             */
/*   Updated: 2025/06/07 15:52:05 by chantas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (src < dest)
	{
		while (n--)
			d[n] = s[n];
		return (dest);
	}
	else
	{
		return (ft_memcpy(dest, src, n));
	}
	return (NULL);
}
