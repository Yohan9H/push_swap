/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 13:15:53 by yohurteb          #+#    #+#             */
/*   Updated: 2024/06/12 16:56:47 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list **a)
{
	t_list	*next_value;
	int		swap;

	if (!a || !*a)
		return ;
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

	if (!b || !*b)
		return ;
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
	if (!a || !*a)
		return ;
	swap = (*a)->value;
	(*a)->value = next_value->value;
	next_value->value = swap;
	next_value = (*b)->next;
	if (!b || !*b)
		return ;
	swap = (*b)->value;
	(*b)->value = next_value->value;
	next_value->value = swap;
	write(1, "ss\n", 3);
}

void	pa(t_list **a, t_list **b)
{
	t_list	*new;

	if (!a || !b || !*b)
		return ;
	new = *b;
	*b = (*b)->next;
	ft_lstadd_front(a, new);
	write(1, "pa\n", 3);
}

void	pb(t_list **b, t_list **a)
{
	t_list	*new;

	if (!b || !a || !*b)
		return ;
	new = *a;
	*a = (*a)->next;
	ft_lstadd_front(b, new);
	write(1, "pb\n", 3);	
}

// #include <stdlib.h>
// #include <stdio.h>
// int	main()
// {
// 	t_list	*testA_1 = malloc(sizeof(t_list));
// 	t_list	*testA_2 = malloc(sizeof(t_list));
// 	t_list	*testA_3 = malloc(sizeof(t_list));
// 	t_list	*testA_4 = malloc(sizeof(t_list));

// 	testA_1->next = testA_2;
// 	testA_2->next = testA_3;
// 	testA_3->next = testA_4;
// 	testA_4->next = NULL;
// 	testA_1->value = 0; 
// 	testA_2->value = 2; 
// 	testA_3->value = 3;
// 	testA_4->value = 4;

// 	t_list	*testB_1 = malloc(sizeof(t_list));
// 	t_list	*testB_2 = malloc(sizeof(t_list));
// 	t_list	*testB_3 = malloc(sizeof(t_list));

// 	testB_1->next = testB_2;
// 	testB_2->next = testB_3;
// 	testB_3->next = NULL;
// 	testB_1->value = 1; 
// 	testB_2->value = 2; 
// 	testB_3->value = 3;

// 	printf("---Before---\n%d | %d\n%d | %d\n%d | %d\n%d |\n\n", testA_1->value, testB_1->value, testA_2->value, testB_2->value, testA_3->value, testB_3->value, testA_4->value);

// 	pa(&testA_1, &testB_1);

// 	printf("---After---\nA :\n");
// 	t_list *current = testA_1;
// 	t_list *current2 = testB_1;
// 	while (current)
// 	{
// 		printf("%d\n", current->value);
// 		current = current->next;
//     }
// 	printf("\nB :\n");
// 	while (current2)
// 	{
// 		printf("%d\n", current2->value);
// 		current2 = current2->next;
//     }
//     printf("\n");
// 	ft_lstclear(&testA_1);
// 	ft_lstclear(&testB_1);
// }