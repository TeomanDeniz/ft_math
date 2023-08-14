/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_softmedianf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:41:41 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/20 01:24:44 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

float
	ft_softmedianf(float *x, register int size, register float alpha)
{
	register int	epsilon;
	register float	result;
	register float	sum;

	epsilon = -1;
	result = 0.0F;
	sum = 0.0F;
	while (++epsilon, epsilon < size)
		sum += ft_expf(-alpha * x[epsilon]);
	epsilon = -1;
	while (++epsilon, epsilon < size)
		result += x[epsilon] * ft_expf(-alpha * x[epsilon]) / sum;
	return (result);
}
