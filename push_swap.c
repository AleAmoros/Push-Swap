/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoros- <aamoros-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 19:21:58 by aamoros-          #+#    #+#             */
/*   Updated: 2024/08/24 19:39:15 by aamoros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_argc_2(int argc)
{
	static int	mybool;

	if (argc == 2)
		mybool = 1;
	return (mybool);
}

int	is_overflow_error(int error)
{
	static int	mybool;

	if (error)
		mybool = 1;
	return (mybool);
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	if (argc < 2)
		return (-1);
	is_argc_2(argc);
	check_args(argc, argv);
	init_stack(&a, argc, argv);
	if (is_sorted(&a) == 1)
	{
		free_stack(&a);
		return (0);
	}
	b = NULL;
	sort_stack(&a, &b);
	free_stack(&a);
	free_stack(&b);
	return (0);
}
