/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lgamma.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 23:59:08 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/19 21:44:09 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

double
	ft_lgamma(register double x)
{
	if (ft_isnan(x))
		return (x);
	if (ft_isinf(x) || x == 0.0 || (x < 0.0 && (x - (long long)x == 0.0)))
		return (1.0 / 0.0);
	if (x == 1.0 || x == 2.0)
		return (0.0);
	if (x >= 3.0 && (x - (long long)x == 0.0))
		x += 0.00000000001;
	return (ft_log(ft_fabs(ft_tgamma(x))));
}
