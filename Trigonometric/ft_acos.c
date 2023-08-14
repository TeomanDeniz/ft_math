/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_acos.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:18:03 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/19 17:21:21 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

double
	ft_acos(register double x)
{
	if (x > 1.0 || x < -1.0)
		return (0.0 / 0.0);
	if (x == 1.0)
		return (0.0);
	return (ft_fabs(ft_atan2(ft_sqrt(1.0F - (x * x)), x)));
}
