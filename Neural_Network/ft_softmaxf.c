/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_softmaxf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:02:38 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
#  float ft_expf(float);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

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
