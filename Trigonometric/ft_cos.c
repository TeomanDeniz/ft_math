/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cos.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 11:38:23 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/19 17:26:21 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

double
	ft_cos(register double x)
{
	register double			result;
	register double			term;
	register unsigned int	epsilon;

	if (ft_isinf(x))
		return (0.0 / 0.0);
	result = 1.0;
	term = 1.0;
	epsilon = 0;
	x = ft_fmod(x, 2.0 * M_PI);
	while (++epsilon, ft_fabs(term) > 1E-15)
	{
		term = -term * x * x / (2.0 * epsilon - 1.0) / (2.0 * epsilon);
		result += term;
	}
	return (result);
}
