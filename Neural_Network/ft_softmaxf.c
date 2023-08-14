/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_softmaxf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:02:38 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/20 01:18:40 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

void
	ft_softmaxf(float *x, register int size)
{
	register float	sum;
	register int	epsilon;

	sum = 0.0F;
	epsilon = -1;
	while (++epsilon, epsilon < size)
		sum += ft_expf(x[epsilon]);
	epsilon = -1;
	while (++epsilon, epsilon < size)
		x[epsilon] = ft_expf(x[epsilon]) / sum;
}
