/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_log.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 20:35:52 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/01 18:05:38 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_math.h"

double
	ft_log(register double x)
{
	register double	result;
	register double	denominator;
	register int	counter;
	double			numerators[2];

	if (x < 0.0)
		return (0.0 / 0.0);
	if (x == 0.0)
		return (-1.0 / 0.0);
	if (ft_isinf(x) || ft_isnan(x))
		return (x);
	result = 0.0;
	denominator = 1.0;
	numerators[0] = (x - 1.0) / (x + 1.0);
	numerators[1] = (numerators[0]) * (numerators[0]);
	counter = 1;
	while (ft_fabs(numerators[0] / (2 * counter)) > 1E-15)
	{
		result += numerators[0] / denominator;
		numerators[0] *= numerators[1];
		denominator += 2.0;
		counter += 2;
	}
	return (2.0 * result);
}
