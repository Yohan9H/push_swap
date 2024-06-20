/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 14:49:03 by yohurteb          #+#    #+#             */
/*   Updated: 2024/06/20 10:30:17 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	if_same(char **argv, int nb, size_t j)
{
	j++;
	while (argv[j])
	{
		if (ft_atoi(argv[j]) == nb)
			return (1);
		j++;
	}
	return (0);
}

static int	is_num(char *argv)
{
	size_t	i;

	i = 0;
	if (argv[0] == '-' && argv[1] == '\0')
		return (1);
	if (argv[0] == '-')
		i++;
	while (argv[i])
	{
		if (argv[i] < '0' || argv[i] > '9')
			return (1);
		i++;
	}
	return (0);
}

int	check_args(int argc, char **argv)
{
	size_t		j;
	long long	tmp;

	j = 1;
	(void)argc;
	while (argv[j])
	{
		if (argv[j][0] == '\0')
			return (1);
		if (is_num(argv[j]) == 1)
			return (1);
		tmp = ft_atoi(argv[j]);
		if (tmp < -2147483648 || tmp > 2147483647)
			return (1);
		if (if_same(argv, tmp, j) == 1)
			return (1);
		j++;
	}
	return (0);
}
