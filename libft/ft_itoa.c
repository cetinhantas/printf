/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chantas <chantas@student.42istanbul.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 18:31:32 by chantas           #+#    #+#             */
/*   Updated: 2025/06/15 20:28:27 by chantas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(int n)
{
	size_t	counter;

	if (n == -2147483648)
		return (11);
	counter = 1;
	if (n < 0)
	{
		n = -n;
		counter++;
	}
	while (n / 10)
	{
		n = n / 10;
		counter++;
	}
	return (counter);
}

static void	ft_fill(char *ptr, int n, size_t len)
{
	if (n == 0)
	{
		ptr[0] = '0';
		ptr[1] = 0;
	}
	else if (n == -2147483648)
		ft_strlcpy(ptr, "-2147483648", 12);
	else
	{
		if (n < 0)
		{
			ptr[0] = '-';
			n = -n;
		}
		ptr[len--] = '\0';
		while (n / 10)
		{
			ptr[len] = (n % 10) + 48;
			n = n / 10;
			len--;
		}
		ptr[len] = n + 48;
	}
}

char	*ft_itoa(int n)
{
	char	*ptr;
	size_t	len;

	len = ft_count(n);
	ptr = (char *)malloc(len + 1);
	if (!ptr)
		return (NULL);
	ft_fill(ptr, n, len);
	return (ptr);
}
