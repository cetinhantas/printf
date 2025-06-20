/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chantas <chantas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 01:36:37 by chantas           #+#    #+#             */
/*   Updated: 2025/06/08 16:35:32 by chantas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	void	*org;

	org = dest;
	if (!dest && !src)
		return (NULL);
	while (n--)
		*(char *)dest++ = *(char *)src++;
	return (org);
}
