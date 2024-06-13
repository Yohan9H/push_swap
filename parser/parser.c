/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 16:51:37 by yohurteb          #+#    #+#             */
/*   Updated: 2024/06/13 14:20:00 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*get_min(t_list **lst)
{
	t_list	*list;
	t_list	*min;
	int		verif;

	min = NULL;
	verif = 0;
	list = *lst;
	while (list)
	{
		if ((list->index == -1) && (verif == 0 || list->value < min->value))
		{
			min = list;
			verif = 1;
		}
		list = list->next;
	}
	return (min);
}

void	init_index(t_list **lst)
{
	t_list	*list;
	int		index;

	list = *lst;
	index = 0;
	list = get_min(lst);
	while (list != NULL)
	{
		list->index = index++;
		list = get_min(lst);
	}
}

t_list *parser(char **argv, t_list **lst)
{
	t_list	*new;
	size_t	j;

	j = 1;
	while (argv[j])
	{
		new = ft_lstnew(ft_atoi(argv[j]));
		ft_lstadd_back(lst, new);
		j++;
	}
	init_index(lst);
	return (*lst);
}

#include <stdio.h>
int	main(int argc, char **argv)
{
	t_list	*lst;

	lst = NULL;
	lst = parser(argv, &lst);
	while (lst)
	{
		printf("%d -", lst->value);
		printf(" %d\n", lst->index);
		lst = lst->next;
	}
}