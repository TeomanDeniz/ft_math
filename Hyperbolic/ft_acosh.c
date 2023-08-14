/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_acosh.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 16:01:28 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/01 16:01:29 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

double
	ft_acosh(register double x)
{
	if (ft_isnan(x))
		return (x);
	if (x < 1.0)
		return (0.0 / 0.0);
	if (ft_isinf(x))
		return (x);
	return (ft_log(x + ft_sqrt(x * x - 1.0)));
}
