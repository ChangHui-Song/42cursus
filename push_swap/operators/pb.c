/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 11:50:22 by chsong            #+#    #+#             */
/*   Updated: 2022/03/22 18:56:28 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(t_list *stack)
{
	if (stack->a_size == 0)
		return ;
	push_b_top(stack, pop_a_top(stack));
	print_operator("pb", 1);
}
