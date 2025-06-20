/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chantas <chantas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 02:45:47 by chantas           #+#    #+#             */
/*   Updated: 2025/06/13 03:02:36 by chantas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*ptr;

	len = ft_strlen(s);
	ptr = (char *)malloc(len + 1);
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, s, len + 1);
	return (ptr);
}
