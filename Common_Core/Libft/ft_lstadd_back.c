/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:53:43 by thda-sil          #+#    #+#             */
/*   Updated: 2023/11/21 11:54:35 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	last;

	if (!lst || !new)
		return (NULL);
	if (!*lst)
	{
		*lst = new;
		return ;	
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
