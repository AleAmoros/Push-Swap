/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoros- <aamoros-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 17:04:43 by aamoros-          #+#    #+#             */
/*   Updated: 2024/08/23 23:00:44 by aamoros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack **stack)
{
	t_stack	*first;
	t_stack	*last;

	if (ft_stacksize(*stack) < 2)
		return ;
	first = *stack;
	last = ft_stacklast(first);
	*stack = first->next;
	first->next = NULL;
	last->next = first;
	return ;
}

void	ra(t_stack **a)
{
	rotate(a);
	write(1, "ra\n", 3);
	return ;
}

void	rb(t_stack **b)
{
	rotate(b);
	write(1, "rb\n", 3);
	return ;
}

void	rr(t_stack **a, t_stack **b)
{
	rotate(a);
	rotate(b);
	write(1, "rr\n", 3);
	return ;
}
