/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 13:08:18 by chsong            #+#    #+#             */
/*   Updated: 2022/03/28 22:27:54 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

#include <signal.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int		ft_atoi(const char *str);
void	ft_putstr(char *s);
void	ft_putchar(char c);
void	ft_putnbr(int n);

#endif