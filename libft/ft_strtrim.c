/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chantas <chantas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 04:26:00 by chantas           #+#    #+#             */
/*   Updated: 2025/06/13 05:07:05 by chantas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	end;
	size_t	start;
	char	*ptr;

	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[start]))
		start++;
	while (ft_strrchr(set, s1[end]))
		end--;
	ptr = ft_substr(s1, start, end - start + 1);
	return (ptr);
}
