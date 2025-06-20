/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chantas <chantas@student.42istanbul.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 19:14:40 by chantas           #+#    #+#             */
/*   Updated: 2025/06/17 19:37:05 by chantas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;
	int		len;

	if (!lst || !*lst)
		return ;
	len = ft_lstsize(*lst);
	while (len)
	{
		next = (*lst)->next;
		(*del)((*lst)->content);
		free(*lst);
		*lst = next;
		len--;
	}
}
