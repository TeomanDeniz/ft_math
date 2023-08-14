/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_softmin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:02:38 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/13 15:02:40 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

double
	ft_softmin(double *x, register int size, register double alpha)
{
	register int	epsilon;
	register double	result;
	register double	sum;

	epsilon = -1;
	sum = 0.0;
	result = 0.0;
	while (++epsilon, epsilon < size)
		sum += ft_exp(-alpha * x[epsilon]);
	epsilon = -1;
	while (++epsilon, epsilon < size)
		result += x[epsilon] * ft_exp(-alpha * x[epsilon]) / sum;
	return (result);
}
