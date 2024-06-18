/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 13:15:53 by yohurteb          #+#    #+#             */
/*   Updated: 2024/06/18 10:10:35 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list **a)
{
	t_list	*next_value;
	int		swap;

	next_value = (*a)->next;
	swap = (*a)->value;
	(*a)->value = next_value->value;
	next_value->value = swap;
	write(1, "sa\n", 3);
}

void	sb(t_list **b)
{
	t_list	*next_value;
	int		swap;

	next_value = (*b)->next;
	swap = (*b)->value;
	(*b)->value = next_value->value;
	next_value->value = swap;
	write(1, "sb\n", 3);
}

void	ss(t_list **a, t_list **b)
{
	t_list	*next_value;
	int		swap;

	next_value = (*a)->next;
	swap = (*a)->value;
	(*a)->value = next_value->value;
	next_value->value = swap;
	next_value = (*b)->next;
	swap = (*b)->value;
	(*b)->value = next_value->value;
	next_value->value = swap;
	write(1, "ss\n", 3);
}

void	pa(t_list **a, t_list **b)
{
	t_list	*new;

	new = *b;
	*b = (*b)->next;
	ft_lstadd_front(a, new);
	write(1, "pa\n", 3);
}

void	pb(t_list **b, t_list **a)
{
	t_list	*new;

	new = *a;
	*a = (*a)->next;
	ft_lstadd_front(b, new);
	write(1, "pb\n", 3);
}
