/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exp10f.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:09:38 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/20 01:41:40 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

float
	ft_exp10f(register float x)
{
	if (ft_isnan(x) || ft_isinf(x) == 1)
		return (x);
	if (ft_isinf(x))
		return (0.0F);
	if (x == 0.0F)
		return (1.0F);
	return (ft_powf(10.0F, x));
}
