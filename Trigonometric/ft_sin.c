/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sin.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 11:38:23 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/19 17:35:28 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

double
	ft_sin(register double x)
{
	register double			result;
	register double			term;
	register unsigned int	epsilon;

	if (ft_isinf(x))
		return (0.0 / 0.0);
	x = ft_fmod(x, 2.0 * M_PI);
	epsilon = 3;
	term = x;
	result = x;
	while (ft_fabs(term) > 1E-15)
	{
		term = -term * x * x / (epsilon * (epsilon - 1.0));
		result += term;
		epsilon += 2;
	}
	return (result);
}
