/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ceilf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 14:28:47 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/19 22:01:48 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

float
	ft_ceilf(register float x)
{
	if (ft_isnan(x) || ft_isinf(x))
		return (x);
	if (x == ft_truncf(x))
		return (x);
	if (x > 0.0F)
		return (ft_truncf(x) + 1.0F);
	return (ft_truncf(x));
}
