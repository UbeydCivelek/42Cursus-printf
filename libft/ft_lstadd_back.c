/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucivelek <ucivelek@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:44:44 by ucivelek          #+#    #+#             */
/*   Updated: 2022/02/21 14:45:50 by ucivelek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*xlst;

	xlst = *lst;
	if (!new)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		while (xlst->next != NULL)
		{
			xlst = xlst->next;
		}
		xlst->next = new;
	}
}
