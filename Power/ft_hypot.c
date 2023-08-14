/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hypot.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 12:38:27 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/02 12:38:29 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

double
	ft_hypot(register double p, register double b)
{
	if (ft_isinf(p) || ft_isinf(b))
		return (1.0 / 0.0);
	if (ft_isnan(p))
		return (p);
	if (ft_isnan(b))
		return (b);
	if (p == 0.0 && b == 0.0)
		return (0.0);
	return (ft_sqrt((p * p) + (b * b)));
}
