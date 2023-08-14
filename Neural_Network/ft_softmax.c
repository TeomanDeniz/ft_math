/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_softmax.c                                       :+:      :+:    :+:   */
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

void
	ft_softmax(double *x, register int size)
{
	register double	sum;
	register int	epsilon;

	sum = 0.0;
	epsilon = -1;
	while (++epsilon, epsilon < size)
		sum += ft_exp(x[epsilon]);
	epsilon = -1;
	while (++epsilon, epsilon < size)
		x[epsilon] = ft_exp(x[epsilon]) / sum;
}
