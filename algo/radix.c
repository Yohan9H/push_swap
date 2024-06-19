/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 17:25:04 by yohurteb          #+#    #+#             */
/*   Updated: 2024/06/19 12:10:48 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	int	give_max(t_list **stack_a, int max_index)
{
	t_list	*lst;
	int		max_bits;

	lst = *stack_a;
	max_bits = 0;
	while (max_index >> max_bits != 0)
		max_bits++;
	return (max_bits);
}

static void	clean_b(t_list **stack_a, t_list **stack_b)
{
	while (ft_lstsize(*stack_b) != 0)
		pa(stack_a, stack_b);
}

void	radix_sort(t_list **stack_a, t_list **stack_b)
{
	t_list	*lst;
	int		i;
	int		j;
	int		size;
	int		max_bits;

	i = 0;
	j = 0;
	size = ft_lstsize(*stack_a);
	max_bits = give_max(stack_a, size - 1);
	lst = *stack_a;
	while (i < max_bits)
	{
		j = 0;
		while (j++ < size)
		{
			lst = *stack_a;
			if (((lst->index >> i) & 1) == 1)
				ra(stack_a);
			else
				pb(stack_b, stack_a);
		}
		clean_b(stack_a, stack_b);
		i++;
	}
}
