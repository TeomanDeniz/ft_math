/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_frexp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 20:39:47 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
#    int ft_isnan(double);
#    int ft_isinf(double);
# double ft_fabs(double);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

double
	ft_frexp(double x, long *exponent)
{
	register long	sign;
	register int	epsilon;

	if (ft_isnan(x) || ft_isinf(x))
		return (x);
	sign = 1U;
	epsilon = -1;
	if (x < 0.0)
		sign = -1U;
	if (x == 0.0)
	{
		*exponent = 0;
		return (0.0);
	}
	x = ft_fabs(x);
	while (++epsilon, x >= 1.0)
		x /= 2.0;
	epsilon++;
	while (--epsilon, x < 0.5)
		x *= 2.0;
	*exponent = sign * epsilon;
	x *= (double)sign;
	return (x);
}
