/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ilogb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 20:17:46 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/19 21:08:48 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

int
	ft_ilogb(register double x)
{
	if (ft_isnan(x) || x == 0.0)
		return (0X80000000);
	if (ft_isinf(x))
		return (0X7FFFFFFF);
	return ((int) ft_floor(ft_log2(ft_fabs(x))));
}
