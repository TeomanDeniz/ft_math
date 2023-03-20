/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_log1pf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 14:26:58 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/19 20:58:59 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../ft_math.h"

float
	ft_log1pf(register float x)
{
	register float	y;

	if (ft_isnan(x) || ft_isinf(x))
		return (x);
	if (x == -1.0F)
		return (-1.0F / 0.0F);
	if (x < -1.0F)
		return (-0.0F / 0.0F);
	if (x < 1E-15F)
		return (x - 0.5F * x * x);
	y = 1.0F + x;
	return (ft_logf(y) - ((y - 1.0F) - x) / y);
}
