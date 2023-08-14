/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fdimf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 00:52:30 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/20 00:53:33 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

float
	ft_fdimf(register float x, register float y)
{
	if (ft_isinf(x) == 1 || ft_isnan(x))
		return (x);
	if (ft_isnan(y))
		return (y);
	if (x > y)
		return (x - y);
	return (0.0F);
}
