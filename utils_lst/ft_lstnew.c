/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:39:05 by yohurteb          #+#    #+#             */
/*   Updated: 2024/06/12 18:34:45 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(int content)
{
	t_list	*list;

	list = (t_list *)malloc(sizeof(t_list));
	if (!list)
		return (NULL);
	list->value = content;
	list->next = NULL;
	return (list);
}

// #include <stdio.h>
// int	main()
// {
// 	char 	content[] = "lorem ipsum dolor sit";
// 	t_list	*lst;

// 	lst = ft_lstnew(content);
// 	printf("Test 1 : %s\n", (char *)lst->content);
// 	free(lst);
// 	return (0);
// }