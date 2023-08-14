/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tanhf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:26:29 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/19 20:39:30 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

float
	ft_tanhf(register float x)
{
	if (ft_isnan(x))
		return (x);
	if (ft_isinf(x))
		return (1.0F * ft_isinf(x));
	return ((ft_expf(x) - ft_expf(-x)) / (ft_expf(x) + ft_expf(-x)));
}
