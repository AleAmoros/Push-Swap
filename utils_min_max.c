/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_min_max.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoros- <aamoros-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 14:43:12 by aamoros-          #+#    #+#             */
/*   Updated: 2024/08/23 23:17:28 by aamoros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	index_distance(t_stack **stack, int target_index)
{
	t_stack	*current;
	int		distance;

	current = *stack;
	distance = 0;
	while (current)
	{
		if (current->index == target_index)
			break ;
		distance++;
		current = current->next;
	}
	return (distance);
}

int	find_min(t_stack **stack, int exclude_val)
{
	t_stack	*current;
	int		min;

	current = *stack;
	min = current->index;
	while (current->next)
	{
		current = current->next;
		if ((current->index < min) && current->index != exclude_val)
			min = current->index;
	}
	return (min);
}

t_stack	*find_next_min(t_stack **stack)
{
	t_stack	*current;
	t_stack	*min;
	int		min_index;

	current = *stack;
	min = NULL;
	min_index = 0;
	while (current)
	{
		if (current->index == -1 && (!min_index || current->value < min->value))
		{
			min = current;
			min_index = 1;
		}
		current = current->next;
	}
	return (min);
}

void	index_stack(t_stack **a)
{
	t_stack	*min_node;
	int		index;

	index = 0;
	min_node = find_next_min(a);
	while (min_node)
	{
		min_node->index = index++;
		min_node = find_next_min(a);
	}
}

int	get_max_bits(t_stack **stack)
{
	t_stack	*current;
	int		max;
	int		max_bits;

	current = *stack;
	max = current->index;
	max_bits = 0;
	while (current)
	{
		if (current->index > max)
			max = current->index;
		current = current->next;
	}
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}
