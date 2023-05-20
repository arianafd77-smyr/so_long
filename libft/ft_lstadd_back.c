/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 13:57:53 by arforouz          #+#    #+#             */
/*   Updated: 2022/10/16 18:23:23 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (*lst && new)
	{
		tmp = lst[0];
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
	else if (new)
		*lst = new;
}
