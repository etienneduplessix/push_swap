/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver_utils_ba.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edupless <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 19:12:04 by edupless          #+#    #+#             */
/*   Updated: 2023/06/22 19:14:56 by edupless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_case_rarb_a(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = ft_trouver_a(a, c);
	if (i < ft_trouver_i(b, c))
		i = ft_trouver_i(b, c);
	return (i);
}

int	ft_case_rrarrb_a(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_trouver_a(a, c))
		i = ft_lstsize2(a) - ft_trouver_a(a, c);
	if ((i < (ft_lstsize2(b) - ft_trouver_i(b, c))) && ft_trouver_i(b, c))
		i = ft_lstsize2(b) - ft_trouver_i(b, c);
	return (i);
}

int	ft_case_rarrb_a(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_trouver_i(b, c))
		i = ft_lstsize2(b) - ft_trouver_i(b, c);
	i = ft_trouver_a(a, c) + i;
	return (i);
}

int	ft_case_rrarb_a(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_trouver_a(a, c))
		i = ft_lstsize2(a) - ft_trouver_a(a, c);
	i = ft_trouver_i(b, c) + i;
	return (i);
}
