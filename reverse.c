/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoros- <aamoros-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 17:12:25 by aamoros-          #+#    #+#             */
/*   Updated: 2024/08/23 23:00:28 by aamoros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_stack **stack)
{
	t_stack	*last;
	t_stack	*second_last;

	if (ft_stacksize(*stack) < 2)
		return ;
	last = *stack;
	second_last = ft_stacklast(last);
	while (last)
	{
		if (last->next->next == NULL)
		{
			last->next = NULL;
			break ;
		}
		last = last->next;
	}
	second_last->next = *stack;
	*stack = second_last;
	return ;
}

void	rra(t_stack **a)
{
	reverse_rotate(a);
	write(1, "rra\n", 4);
	return ;
}

void	rrb(t_stack **b)
{
	reverse_rotate(b);
	write(1, "rrb\n", 4);
	return ;
}

void	rrr(t_stack **a, t_stack **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	write(1, "rrr\n", 4);
	return ;
}
