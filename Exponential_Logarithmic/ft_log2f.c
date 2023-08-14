/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_log2f.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 18:08:32 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/19 20:57:34 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

float
	ft_log2f(register float x)
{
	if (ft_isnan(x) || ft_isinf(x))
		return (x);
	if (x == 0.0F)
		return ((-1.0F / 0.0F));
	if (x < 0.0F)
		return ((0.0F / 0.0F));
	return (ft_logf(x) / M_LN2_F);
}
