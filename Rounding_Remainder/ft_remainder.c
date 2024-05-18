/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remainder.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:29:31 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
#    int ft_isnan(double);
#    int ft_isinf(double);
# double ft_round(double);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

double
	ft_remainder(double x, double y)
{
	register double	quotient;
	register double	rounded_quotient;

	if (ft_isnan(x) || ft_isinf(y))
		return (x);
	if (ft_isnan(y))
		return (y);
	if (ft_isinf(x) || y == 0.0)
		return (0.0 / 0.0);
	quotient = (x / y);
	rounded_quotient = ft_round(quotient);
	return (x - rounded_quotient * y);
}
