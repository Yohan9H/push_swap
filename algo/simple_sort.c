/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 11:18:47 by yohurteb          #+#    #+#             */
/*   Updated: 2024/06/14 17:10:48 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	give_min(t_list **stack_a, int value)
{
	t_list	*lst;
	int		min;

	lst = *stack_a;
	min = lst->index;
	while (lst->next)
	{
		lst = lst->next;
		if (lst->index < min && lst->index != value)
			min = lst->index;
	}
	return (min);
}

void	sort_3(t_list **stack_a)
{
	t_list	*lst;
	int		min;
	int		next_min;

	lst = *stack_a;
	min = give_min(stack_a, -1);
	next_min = give_min(stack_a, min);
	sort_3_two(stack_a, lst, min, next_min);
}

void	sort_4(t_list **stack_a, t_list **stack_b)
{
	int	pos_min;

	pos_min = give_pos_min(stack_a, give_min(stack_a, -1));
	if (pos_min == 1)
		ra(stack_a);
	else if (pos_min == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (pos_min == 3)
		rra(stack_a);
	if (is_sorted(stack_a) == 0)
		return ;
	pb(stack_b, stack_a);
	sort_3(stack_a);
	pa(stack_a, stack_b);
}

void	sort_5(t_list **stack_a, t_list **stack_b)
{
	int	pos_min;

	pos_min = give_pos_min(stack_a, give_min(stack_a, -1));
	if (pos_min == 1)
		ra(stack_a);
	else if (pos_min == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (pos_min == 3)
	{
		rra(stack_a);
		rra(stack_a);
	}
	else if (pos_min == 4)
		rra(stack_a);
	if (is_sorted(stack_a) == 0)
		return ;
	pb(stack_b, stack_a);
	sort_4(stack_a, stack_b);
	pa(stack_a, stack_b);
}

void	simple_sort(t_list	**stack_a, t_list **stack_b)
{
	int	size;

	size = ft_lstsize(*stack_a);
	if (is_sorted(stack_a) == 0 || size <= 1)
		return ;
	if (size == 2)
		sa(stack_a);
	else if (size == 3)
		sort_3(stack_a);
	else if (size == 4)
		sort_4(stack_a, stack_b);
	else if (size == 5)
		sort_5(stack_a, stack_b);
}
// get_min
// sort_2
// sort_3
// sort_4
// sort_5