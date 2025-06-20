/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chantas <chantas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 23:45:07 by chantas           #+#    #+#             */
/*   Updated: 2025/06/13 04:53:47 by chantas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	nlen;
	size_t	slen;

	slen = ft_strlen(s);
	if (!len || !*s || start >= slen)
		return (ft_calloc(1, 1));
	if (len > slen)
		len = slen;
	nlen = ft_strlen(&s[start]) + 1;
	if (nlen > len + 1)
		nlen = len + 1;
	ptr = (char *)malloc(nlen);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, &s[start], nlen);
	return (ptr);
}
