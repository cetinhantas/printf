/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chantas <chantas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 18:12:07 by chantas           #+#    #+#             */
/*   Updated: 2025/06/08 18:51:17 by chantas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	size_t	len;

	len = ft_strlen(s);
	ptr = (char *)s;
	if (ptr[len] == (unsigned char)c)
		return (&ptr[len]);
	while (len--)
	{
		if (ptr[len] == (unsigned char)c)
			return (&ptr[len]);
	}
	return (NULL);
}
