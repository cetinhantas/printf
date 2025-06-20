/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chantas <chantas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 03:02:01 by chantas           #+#    #+#             */
/*   Updated: 2025/06/13 04:56:10 by chantas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	char	*ptr;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	ptr = (char *)malloc(s1len + s2len + 1);
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, s1, s1len);
	ft_memcpy(&ptr[s1len], s2, s2len + 1);
	return (ptr);
}
