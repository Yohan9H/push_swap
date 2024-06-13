/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 16:51:37 by yohurteb          #+#    #+#             */
/*   Updated: 2024/06/13 11:19:54 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list *parser(char **argv, t_list **lst)
{
	t_list	*new;
	t_list	*tmp;
	size_t	j;

	j = 1;
	tmp = *lst;
	while (argv[j])
	{
		
		new = ft_lstnew(ft_atoi(argv[j]));
		ft_lstadd_back(lst, new);
		j++;
	}
	return (*lst);
}

void	init_index(char **argv, t_list **lst)
{
	
}

// #include <stdio.h>
// int	main(int argc, char **argv)
// {
// 	t_list	*lst;

// 	lst = NULL;
// 	lst = parser(argc, argv, &lst);
// 	while (lst != NULL)
// 	{
// 		printf("%d\n", lst->value);
// 		lst = lst->next;
// 	}
// }