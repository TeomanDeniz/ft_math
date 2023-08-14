/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fdim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 00:51:30 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/20 00:52:33 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

double
	ft_fdim(register double x, register double y)
{
	if (ft_isinf(x) == 1 || ft_isnan(x))
		return (x);
	if (ft_isnan(y))
		return (y);
	if (x > y)
		return (x - y);
	return (0.0);
}
