/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 13:15:55 by yohurteb          #+#    #+#             */
/*   Updated: 2024/06/14 14:30:02 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

typedef struct s_list
{
	int					value;
	int					index;
	struct s_list	*next;
} 						t_list;

int	nb_base_long(unsigned long nb, char *base, unsigned long size_b);

int	verif_nil(unsigned long nb, char *base, unsigned long size_b);

int	ft_lstsize(t_list *lst);

t_list	*ft_lstnew(int content);

t_list	*ft_lstlast(t_list *lst);

void	ft_lstadd_front(t_list **lst, t_list *new);

void	ft_lstadd_back(t_list **lst, t_list *new);

void	ft_lstclear(t_list **lst);

void	sa(t_list **a);

void	sb(t_list **b);

void	ss(t_list **a, t_list **b);

void	pa(t_list **a, t_list **b);

void	pb(t_list **b, t_list **a);

void	ra(t_list **a);

void	rb(t_list **b);

void	rr(t_list **a, t_list **b);

void	rra(t_list **a);

void	rrb(t_list **b);

long	ft_atoi(const char *str);

t_list	*parser(char **argv, t_list **lst);

int	check_args(int argc, char **argv);

int	is_sorted(t_list **stack_a);

void	sort_3_two(t_list **stack_a, t_list *lst, int min, int next_min);

int	give_pos_min(t_list	**stack_a, int	min);

#endif