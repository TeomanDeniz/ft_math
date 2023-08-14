/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ceil.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 14:28:47 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/02 14:28:48 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

double
	ft_ceil(register double x)
{
	if (ft_isnan(x) || ft_isinf(x))
		return (x);
	if (x == ft_trunc(x))
		return (x);
	if (x > 0.0)
		return (ft_trunc(x) + 1.0);
	return (ft_trunc(x));
}
