/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_erf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 09:50:19 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/06 09:50:21 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../ft_math.h"

double
	ft_erf(register double x)
{
	register double	t;
	register double	y;

	if (x == 0 || ft_isnan(x))
		return (x);
	if (ft_isinf(x) == 1)
		return (1.0);
	if (ft_isinf(x) == -1)
		return (-1.0);
	y = 1.0;
	if (x < 0.0)
	{
		x = -x;
		y = -1.0;
	}
	t = 1.0 / (1.0 + 0.3275911 * x);
	return (y * (1.0 - (((((1.061405429 * t + -1.453152027)*t) + 1.421413741\
		) * t + -0.284496736) * t + 0.254829592) * t * ft_exp(-x * x)));
}
