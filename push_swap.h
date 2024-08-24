/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoros- <aamoros-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 19:21:18 by aamoros-          #+#    #+#             */
/*   Updated: 2024/08/24 19:43:46 by aamoros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdbool.h>
# include <fcntl.h>

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}					t_stack;

void				push(t_stack **stack, t_stack **new);
void				swap(t_stack **stack);
void				rotate(t_stack **stack);
void				reverse_rotate(t_stack **stack);
void				sa(t_stack **a);
void				sb(t_stack **b);
void				ss(t_stack **a, t_stack **b);
void				pa(t_stack **a, t_stack **b);
void				pb(t_stack **a, t_stack **b);
void				ra(t_stack **a);
void				rb(t_stack **b);
void				rr(t_stack **a, t_stack **b);
void				rra(t_stack **a);
void				rrb(t_stack **b);
void				rrr(t_stack **a, t_stack **b);
void				radix_sort(t_stack **a, t_stack **b);
void				sort_132(t_stack **stack_a);
void				sort_231(t_stack **stack_a);
void				sort_312(t_stack **stack_a);
void				sort_3(t_stack **stack_a);
void				sort_4(t_stack **stack_a, t_stack **stack_b);
void				sort_5(t_stack **stack_a, t_stack **stack_b);
void				simple_sort(t_stack **stack_a, t_stack **stack_b);
void				error(void);
void				free_stack(t_stack **stack);
void				free_str(char **str);
int					duplicate(int num, char **argv, int index);
char				**argc2(char *argv2);
bool				ft_isdigit(int c);
bool				check_int(const char *num);
void				check_args(int argc, char **argv);
int					is_sorted(t_stack **stack);
int					index_distance(t_stack **stack, int target_index);
int					find_min(t_stack **stack, int exclude_val);
t_stack				*find_next_min(t_stack **stack);
void				index_stack(t_stack **a);
int					get_max_bits(t_stack **stack);
void				init_stack(t_stack **a, int argc, char **argv);
void				sort_stack(t_stack **a, t_stack **b);
int					ft_stacksize(t_stack *head);
t_stack				*ft_stacknew(int content);
void				ft_stackadd_back(t_stack **stack, t_stack *new);
t_stack				*ft_stacklast(t_stack *lst);
int					ft_atoi(const char *str);
char				**ft_split(const char *s, char c);
void				free_split(char **str, int index);
void				free_split_result(char **str);
void				check_check_args(char **args, int i, int num, int argc);
int					ft_atoi_helper(const char *str, int i, int sign);
int					is_overflow_error(int error);
int					is_argc_2(int argc);

#endif