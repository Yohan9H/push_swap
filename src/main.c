/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 17:04:51 by yohurteb          #+#    #+#             */
/*   Updated: 2024/06/14 13:23:45 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	stack_b = (t_list *)malloc(ft_lstsize(stack_a) * sizeof(t_list));
	if (is_sorted(&stack_a) == 0)
	{
		ft_lstclear(&stack_a);
		ft_lstclear(&stack_b);
	}
	// simple_sort
	// radix_sort
	ft_lstclear(&stack_a);
	ft_lstclear(&stack_b);
}