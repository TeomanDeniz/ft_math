/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cbrtf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 12:28:15 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/19 21:16:16 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../ft_math.h"

float
	ft_cbrtf(register float x)
{
	register float	result;
	register float	prev_result;

	if (x == 0.0F || x == -0.0F || ft_isinf(x) || ft_isnan(x))
		return (x);
	result = 1.0F;
	prev_result = 0.0F;
	while (ft_fabsf(result - prev_result) > 1E-15F)
	{
		prev_result = result;
		result = (2.0F * result + x / (result * result)) / 3.0F;
	}
	return (result);
}
