/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_acoshf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 16:01:28 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/19 20:31:29 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

float
	ft_acoshf(register float x)
{
	if (ft_isnan(x))
		return (x);
	if (x < 1.0F)
		return (0.0F / 0.0F);
	if (ft_isinf(x))
		return (x);
	return (ft_logf(x + ft_sqrtf(x * x - 1.0F)));
}
