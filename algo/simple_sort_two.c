/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort_two.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 13:30:21 by yohurteb          #+#    #+#             */
/*   Updated: 2024/06/18 10:03:28 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	give_pos_min(t_list	**stack_a, int min)
{
	t_list	*lst;
	int		pos_min;

	lst = *stack_a;
	pos_min = 0;
	while (lst)
	{
		if (lst->index == min)
			break ;
		pos_min++;
		lst = lst->next;
	}
	return (pos_min);
}

void	sort_3_two(t_list **stack_a, t_list *lst, int min, int next_min)
{
	if (lst->index == min)
	{
		ra(stack_a);
		sa(stack_a);
		rra(stack_a);
	}
	else if (lst->index == next_min)
	{
		if (lst->next->index == min)
			sa(stack_a);
		else
			rra(stack_a);
	}
	else
	{
		if (lst->next->index == min)
			ra(stack_a);
		else
		{
			sa(stack_a);
			rra(stack_a);
		}
	}
}
