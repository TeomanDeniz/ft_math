/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 15:58:09 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/18 22:10:30 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../ft_math.h"

static inline double
	exp_inf_or_nan(register double x)
{
	if (x == 0.0)
		return (1.0);
	if (ft_isinf(x) == -1)
		return (0.0);
	if (ft_isinf(x) == 1)
		return (x);
	if (ft_isnan(x))
		return (x);
	return (x);
}

double
	ft_exp(register double x)
{
	register double			result;
	register double			term;
	register unsigned int	counter;

	if (ft_isinf(x) || ft_isnan(x) || x == 0.0)
		return (exp_inf_or_nan(x));
	if (x < 0.0)
		return (1.0 / ft_exp(-x));
	counter = 0;
	result = 1.0;
	term = 1.0;
	while (++counter, x / counter > (x / (x * x + 42)))
	{
		term *= x / counter;
		result += term;
	}
	return (result);
}
