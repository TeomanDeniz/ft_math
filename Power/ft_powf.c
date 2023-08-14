/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_powf.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 16:38:18 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/19 21:20:54 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

/* PROTOTYPES */
static inline float	check_your_six(register float base, register float power);
static inline float	base_is_minus(register float base, register float power);
/* PROTOTYPES */

float
	ft_powf(register float base, register float power)
{
	if (power == 0.0F)
		return (1.0F);
	if (ft_isnan(base))
		return (-(0.0F / 0.0F));
	if (ft_isnan(power))
		return (power);
	if (ft_isinf(base) || ft_isinf(power))
		return (check_your_six(base, power));
	if (power < 0.0F)
		return (1.0F / ft_powf(base, -power));
	if (base < 0.0F)
		return (base_is_minus(base, power));
	return (ft_expf(power * ft_logf(base)));
}

static inline float
	base_is_minus(register float base, register float power)
{
	if (ft_floorf(power) == power)
	{
		if ((int)power % 2 == 0)
			return (ft_pow(-base, power));
		return (-ft_pow(-base, power));
	}
	return (-(0.0F / 0.0F));
}

static inline float
	check_your_six(register float base, register float power)
{
	if (ft_isinf(power) == -1)
		return (0.0F);
	if (ft_isinf(power))
		return (power);
	if (power < 0.0F)
		return (-0.0F);
	return (base);
}
