/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 17:04:51 by yohurteb          #+#    #+#             */
/*   Updated: 2024/06/14 17:31:17 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "stdio.h"

void	simple_or_radix(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(*stack_a) <= 5)
		simple_sort(stack_a, stack_b);
	else
		radix_sort(stack_a, stack_b);
}

void	print_lst(t_list **stack_a) // A enlever !!!!!!!!!
{
	t_list	*lst;

	lst = *stack_a;
	printf("\n---FINSIH---\n");
	while (lst)
	{
		printf("%d\n", lst->value);
		lst = lst->next;
	}
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	if (check_args(argc, argv) == 1)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	stack_a = NULL;
	stack_a = parser(argv, &stack_a);
	stack_b = NULL;
	if (is_sorted(&stack_a) == 0)
	{
		ft_lstclear(&stack_a);
		ft_lstclear(&stack_b);
		return (0);
	}
	simple_or_radix(&stack_a, &stack_b);
	print_lst(&stack_a); // A enlever !!!!!!!!!!!
	ft_lstclear(&stack_a);
	ft_lstclear(&stack_b);
	return (0);
}
