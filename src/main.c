/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 17:04:51 by yohurteb          #+#    #+#             */
/*   Updated: 2024/06/18 11:09:09 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	simple_or_radix(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(*stack_a) <= 5)
		simple_sort(stack_a, stack_b);
	else
		radix_sort(stack_a, stack_b);
}

static void	clean_split(char **argv, int argc)
{
	int	i;

	i = 0;
	if (argc == 1)
	{
		while (argv[i])
		{
			free(argv[i]);
			i++;
		}
		free(argv);
	}
}

static void	main_too_long(t_list *stack_a, t_list *stack_b, char **argv, int argc)
{
	if (is_sorted(&stack_a) == 0)
	{
		ft_lstclear(&stack_a);
		ft_lstclear(&stack_b);
		return ;
	}
	simple_or_radix(&stack_a, &stack_b);
	clean_split(argv, argc);
	ft_lstclear(&stack_a);
	ft_lstclear(&stack_b);
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	argc--;
	if (argc == 1)
	{
		argv = ft_split(argv[1], ' ');
		if (!argv)
			return (1);
	}
	if (check_args(argc, argv) == 1)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	stack_a = NULL;
	stack_a = parser(argv, &stack_a);
	stack_b = NULL;
	main_too_long(stack_a, stack_b, argv, argc);
	return (0);
}
