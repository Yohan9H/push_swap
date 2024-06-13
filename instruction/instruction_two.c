/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction_two.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 12:59:24 by yohurteb          #+#    #+#             */
/*   Updated: 2024/06/12 16:58:20 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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

	if (!a || !*a || !(*a)->next->next)
		return ;
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

	if (!b || !*b || !(*b)->next->next)
		return ;
	last = ft_lstlast(*b);
	tmp = *b;
	while (tmp->next->next != NULL)
		tmp = tmp->next;
	tmp->next = NULL;
	last->next = *b;
	*b = last;
	write(1, "rrb\n", 4);
}

// #include <stdlib.h>
// #include <stdio.h>
// int	main()
// {
// 	t_list	*test_1 = malloc(sizeof(t_list));
// 	t_list	*test_2 = malloc(sizeof(t_list));
// 	t_list	*test_3 = malloc(sizeof(t_list));
// 	t_list	*test_4 = malloc(sizeof(t_list));

// 	test_1->next = test_2;
// 	test_2->next = test_3;
// 	test_3->next = test_4;
// 	test_4->next = NULL;
// 	test_1->value = 1;
// 	test_2->value = 2;
// 	test_3->value = 3;
// 	test_4->value = 4;

// 	t_list	*testB_1 = malloc(sizeof(t_list));
// 	t_list	*testB_2 = malloc(sizeof(t_list));
// 	t_list	*testB_3 = malloc(sizeof(t_list));
// 	t_list	*testB_4 = malloc(sizeof(t_list));

// 	testB_1->next = testB_2;
// 	testB_2->next = testB_3;
// 	testB_3->next = testB_4;
// 	testB_4->next = NULL;
// 	testB_1->value = 1;
// 	testB_2->value = 2;
// 	testB_3->value = 3;
// 	testB_4->value = 4;

// 	printf("---Before---\n%d\n%d\n%d\n%d\n\n", test_1->value, test_2->value, test_3->value, test_4->value);
// 	printf("---\n%d\n%d\n%d\n%d\n\n", testB_1->value, testB_2->value, testB_3->value, testB_4->value);
	
// 	rra(&test_1);

//     printf("---After---\n");
//     while (test_1)
//     {
//         printf("%d\n", test_1->value);
//         test_1 = test_1->next;
//     }
//     printf("\n");
//     while (test_2)
//     {
//         printf("%d\n", test_2->value);
//         test_2 = test_2->next;
//     }
// 	ft_lstclear(&test_1);
// 	ft_lstclear(&testB_1);
// }