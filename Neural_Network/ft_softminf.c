/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_softminf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:02:38 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/20 01:21:40 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../ft_math.h"

float
	ft_softminf(float *x, register int size, register float alpha)
{
	register int	epsilon;
	register float	result;
	register float	sum;

	epsilon = -1;
	sum = 0.0F;
	result = 0.0F;
	while (++epsilon, epsilon < size)
		sum += ft_expf(-alpha * x[epsilon]);
	epsilon = -1;
	while (++epsilon, epsilon < size)
		result += x[epsilon] * ft_expf(-alpha * x[epsilon]) / sum;
	return (result);
}
