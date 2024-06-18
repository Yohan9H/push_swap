/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 17:04:51 by yohurteb          #+#    #+#             */
/*   Updated: 2024/06/17 17:53:43 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "stdio.h"

static void	simple_or_radix(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(*stack_a) <= 5)
		simple_sort(stack_a, stack_b);
	else
		radix_sort(stack_a, stack_b);
}

static char	**need_split(int argc, char **argv)
{
	char	*join;
	char	*join_t;
	char	**join_total;
	int		ac;
	int		i;

	ac = 0;
	i = 1;
	while (ac <= argc && argv[i + 1])
	{
		if (i % 2 == 1)
			join = ft_strjoin(argv[i], argv[i + 1]);
		else
			join_t = ft_strjoin(join, argv[i + 1]);
		i++;
		ac++;
	}
	if (ac < argc)
	{
		join = argv[1];
		join_total = ft_split(join, ' ');
	}
	else
		join_total = ft_split(join_t, ' ');
	return (join_total);
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	argc--;
	if (argc == 1)
		argv = need_split(argc, argv);
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
	ft_lstclear(&stack_a);
	ft_lstclear(&stack_b);
	return (0);
}

	// t_list *svg = stack_a;
	// while (svg)
	// {
	// 	printf("%d\n", svg->value);
	// 	svg = svg->next;
	// }