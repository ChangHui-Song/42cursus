/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 11:48:27 by chsong            #+#    #+#             */
/*   Updated: 2022/03/22 18:56:20 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_list *stack)
{
	if (stack->b_size == 0)
		return ;
	push_a_top(stack, pop_b_top(stack));
	print_operator("pa", 1);
}
