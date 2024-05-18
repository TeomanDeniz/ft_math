/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_softmax.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:02:38 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
# double ft_exp(double);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

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
