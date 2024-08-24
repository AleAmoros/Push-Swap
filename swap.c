/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoros- <aamoros-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 15:41:35 by aamoros-          #+#    #+#             */
/*   Updated: 2024/08/23 22:59:52 by aamoros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **stack)
{
	t_stack	*head;
	t_stack	*next;
	int		tmp;
	int		tmp_index;

	if (ft_stacksize(*stack) < 2)
		return ;
	head = *stack;
	next = head->next;
	if (!head && !next)
		return ;
	tmp = head->value;
	tmp_index = head->index;
	head->value = next->value;
	head->index = next->index;
	next->value = tmp;
	next->index = tmp_index;
	return ;
}

void	sa(t_stack **a)
{
	swap(a);
	write(1, "sa\n", 3);
	return ;
}

void	sb(t_stack **b)
{
	swap(b);
	write(1, "sb\n", 3);
	return ;
}

void	ss(t_stack **a, t_stack **b)
{
	swap(a);
	swap(b);
	write(1, "ss\n", 3);
	return ;
}
