/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoros- <aamoros-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 16:55:51 by aamoros-          #+#    #+#             */
/*   Updated: 2024/08/23 21:39:30 by aamoros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack **stack, t_stack **new)
{
	t_stack	*tmp;
	t_stack	*head;
	t_stack	*prev;

	if (ft_stacksize(*new) == 0)
		return ;
	head = *stack;
	prev = *new;
	tmp = prev;
	prev = prev->next;
	*new = prev;
	if (!head)
	{
		head = tmp;
		head->next = NULL;
		*stack = head;
	}
	else
	{
		tmp->next = head;
		*stack = tmp;
	}
}

void	pa(t_stack **a, t_stack **b)
{
	push(a, b);
	write(1, "pa\n", 3);
	return ;
}

void	pb(t_stack **a, t_stack **b)
{
	push(b, a);
	write(1, "pb\n", 3);
	return ;
}
