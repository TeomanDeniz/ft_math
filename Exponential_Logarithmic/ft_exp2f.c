/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exp2f.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 16:18:27 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/19 20:45:28 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

float
	ft_exp2f(register float x)
{
	if (ft_isinf(x) == 1 || ft_isnan(x))
		return (x);
	if (ft_isinf(x))
		return (0.0F);
	return (ft_expf(x * ft_logf(2.0F)));
}
