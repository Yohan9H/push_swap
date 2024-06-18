/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction_two.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 12:59:24 by yohurteb          #+#    #+#             */
/*   Updated: 2024/06/18 10:10:54 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list **a)
{
	t_list	*tmp;
	t_list	*last;

	tmp = *a;
	*a = (*a)->next;
	last = ft_lstlast(*a);
	tmp->next = NULL;
	last->next = tmp;
	write(1, "ra\n", 3);
}

void	rb(t_list **b)
{
	t_list	*tmp;
	t_list	*last;

	tmp = *b;
	*b = (*b)->next;
	last = ft_lstlast(*b);
	tmp->next = NULL;
	last->next = tmp;
	write(1, "rb\n", 3);
}

void	rr(t_list **a, t_list **b)
{
	t_list	*tmp;
	t_list	*last;

	tmp = *a;
	*a = (*a)->next;
	last = ft_lstlast(*a);
	tmp->next = NULL;
	last->next = tmp;
	tmp = *b;
	*b = (*b)->next;
	last = ft_lstlast(*b);
	tmp->next = NULL;
	last->next = tmp;
	write(1, "rr\n", 3);
}

void	rra(t_list **a)
{
	t_list	*tmp;
	t_list	*last;

	last = ft_lstlast(*a);
	tmp = *a;
	while (tmp->next->next != NULL)
		tmp = tmp->next;
	tmp->next = NULL;
	last->next = *a;
	*a = last;
	write(1, "rra\n", 4);
}

void	rrb(t_list **b)
{
	t_list	*tmp;
	t_list	*last;

	last = ft_lstlast(*b);
	tmp = *b;
	while (tmp->next->next != NULL)
		tmp = tmp->next;
	tmp->next = NULL;
	last->next = *b;
	*b = last;
	write(1, "rrb\n", 4);
}
