/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chantas <chantas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 17:56:38 by chantas           #+#    #+#             */
/*   Updated: 2025/06/14 22:37:11 by chantas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(char const *s, char c)
{
	size_t	i;
	size_t	len;

	len = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			len++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (len);
}

static void	ft_free(char **ptr, size_t j)
{
	while (j--)
		free(ptr[j]);
	free(ptr);
}

static int	ft_fill(char **ptr, char const *s, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (*s)
	{
		len = 0;
		while (*s == c)
			s++;
		if (!*s)
			break ;
		while (s[len] != c && s[len])
			len++;
		ptr[i] = ft_substr(s, 0, len);
		if (!ptr[i])
		{
			ft_free(ptr, i);
			return (0);
		}
		i++;
		s += len;
	}
	ptr[i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;

	if (!s)
		return (NULL);
	ptr = (char **)malloc((ft_count(s, c) + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	if (!ft_fill(ptr, s, c))
		return (NULL);
	return (ptr);
}
