/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lgamma.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 23:59:08 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
#    int ft_isnan(double);
#    int ft_isinf(double);
# double ft_log(double);
# double ft_fabs(double);
# double ft_tgamma(double);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

double
	ft_lgamma(double x)
{
	if (ft_isnan(x))
		return (x);
	if (ft_isinf(x) || x == 0.0 || \
		(x < 0.0 && ((double)((double)x - (long)x) == 0.0)))
		return (1.0 / 0.0);
	if (x == 1.0 || x == 2.0)
		return (0.0);
	if (x >= 3.0 && ((double)((double)x - (long)x) == 0.0))
		x += 0.00000000001;
	return (ft_log(ft_fabs(ft_tgamma(x))));
}
