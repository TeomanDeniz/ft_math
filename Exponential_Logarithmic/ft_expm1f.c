/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_expm1f.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:24:06 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/19 20:47:09 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../ft_math.h"

float
	ft_expm1f(register float x)
{
	if (ft_isnan(x) || ft_isinf(x) == 1)
		return (x);
	if (ft_isinf(x))
		return (-1.0F);
	if (x == 0.0F)
		return (x);
	if (ft_fabsf(x) > 1E-5F)
		return (ft_expf(x) - 1.0F);
	return (x + x * x * 0.5F + \
		x * x * x * 0.16666666666666666F + \
		x * x * x * x * 0.041666666666666664F);
}
