/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 10:31:42 by yohurteb          #+#    #+#             */
/*   Updated: 2024/06/14 11:34:55 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_list **stack_a)
{
	t_list	*lst;
	int		res;

	res = 0;
	lst = *stack_a;
	while (lst && lst->next)
	{
		if (lst->value > lst->next->value)
			res = 1;
		lst = lst->next;
	}
	return (res);
}
