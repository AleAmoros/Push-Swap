/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoros- <aamoros-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 22:22:45 by aamoros-          #+#    #+#             */
/*   Updated: 2024/08/24 19:03:58 by aamoros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_stacksize(t_stack *head)
{
	size_t	i;
	t_stack	*tmp;

	tmp = head;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

t_stack	*ft_stacknew(int content)
{
	t_stack	*i;

	i = (t_stack *)malloc(sizeof(t_stack));
	if (!i)
		return (NULL);
	i->value = content;
	i->index = -1;
	i->next = NULL;
	return (i);
}

void	ft_stackadd_back(t_stack **stack, t_stack *new)
{
	t_stack	*node;

	if (*stack)
	{
		node = ft_stacklast(*stack);
		node->next = new;
		new->next = NULL;
	}
	else
	{
		*stack = new;
		(*stack)->next = NULL;
	}
}

t_stack	*ft_stacklast(t_stack *lst)
{
	t_stack	*tmp;

	tmp = lst;
	if (!tmp)
		return (NULL);
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while (str[i] && (str[i] == 32 || (str[i] >= 9 && str[i] <= 13)))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	return (ft_atoi_helper(str, i, sign));
}
