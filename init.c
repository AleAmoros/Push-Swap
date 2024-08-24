/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoros- <aamoros-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 00:24:29 by aamoros-          #+#    #+#             */
/*   Updated: 2024/08/24 18:44:11 by aamoros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_stack(t_stack **stack, int argc, char **argv)
{
	t_stack	*new;
	char	**str;
	int		i;

	i = 0;
	if (argc == 2)
		str = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		str = argv;
	}
	*stack = ft_stacknew(ft_atoi(str[i++]));
	while (str[i])
	{
		new = ft_stacknew(ft_atoi(str[i]));
		if (!new)
			free_str(str);
		ft_stackadd_back(stack, new);
		i++;
	}
	index_stack(stack);
	if (argc == 2)
		free_str(str);
}

void	sort_stack(t_stack **a, t_stack **b)
{
	if (ft_stacksize(*a) <= 5)
		simple_sort(a, b);
	else
		radix_sort(a, b);
}
