/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoros- <aamoros-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 21:18:15 by aamoros-          #+#    #+#             */
/*   Updated: 2024/08/24 19:50:58 by aamoros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

void	free_stack(t_stack **stack)
{
	t_stack	*current;
	t_stack	*next;

	if (!stack || !*stack)
		return ;
	current = *stack;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*stack = NULL;
}

void	free_str(char **str)
{
	int	i;

	if (str == NULL)
		return ;
	i = 0;
	while (str[i] != NULL)
	{
		free(str[i]);
		i++;
	}
	free(str);
}

void	check_check_args(char **args, int i, int num, int argc)
{
	if (!check_int(args[i]))
	{
		if (argc == 2)
			free_str(args);
		error();
	}
	num = ft_atoi(args[i]);
	if (is_overflow_error(O_RDONLY))
	{
		free_str(args);
		error();
	}
	if (duplicate(num, args, i))
	{
		if (argc == 2)
			free_str(args);
		error();
	}
}

int	ft_atoi_helper(const char *str, int i, int sign)
{
	long long	number;

	number = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + (str[i] - '0');
		if (sign == 1 && number > INT_MAX)
		{
			if (is_argc_2(O_RDONLY))
				is_overflow_error(O_RDWR);
			else
				error();
		}
		if (sign == -1 && (number * -1) < INT_MIN)
		{
			if (is_argc_2(O_RDONLY))
				is_overflow_error(O_RDWR);
			else
				error();
		}
		i++;
	}
	return ((int)(number * sign));
}
