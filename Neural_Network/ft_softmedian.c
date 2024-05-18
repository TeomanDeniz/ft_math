/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_softmedian.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:41:41 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
# double ft_exp(double);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

double
	ft_softmedian(double *x, register int size, register double alpha)
{
	register int	epsilon;
	register double	result;
	register double	sum;

	epsilon = -1;
	result = 0.0;
	sum = 0.0;
	while (++epsilon, epsilon < size)
		sum += ft_exp(-alpha * x[epsilon]);
	epsilon = -1;
	while (++epsilon, epsilon < size)
		result += x[epsilon] * ft_exp(-alpha * x[epsilon]) / sum;
	return (result);
}
