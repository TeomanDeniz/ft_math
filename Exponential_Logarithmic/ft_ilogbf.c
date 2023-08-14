/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ilogbf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 20:17:46 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/19 21:09:48 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

int
	ft_ilogbf(register float x)
{
	if (ft_isnan(x) || x == 0.0F)
		return (0X80000000);
	if (ft_isinf(x))
		return (0X7FFFFFFF);
	return ((int) ft_floorf(ft_log2f(ft_fabsf(x))));
}
