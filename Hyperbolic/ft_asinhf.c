/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_asinhf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:56:37 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/19 20:32:38 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

float
	ft_asinhf(register float x)
{
	if (ft_isinf(x) || ft_isnan(x))
		return (x);
	return (ft_logf(x + ft_sqrtf(x * x + 1.0F)));
}
