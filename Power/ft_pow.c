/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 16:38:18 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/19 21:23:54 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

/* PROTOTYPES */
static inline double	check_ur_6(register double base, register double power);
static inline double	minus_base(register double base, register double power);
/* PROTOTYPES */

double
	ft_pow(register double base, register double power)
{
	if (power == 0.0)
		return (1.0);
	if (ft_isnan(base))
		return (-(0.0 / 0.0));
	if (ft_isnan(power))
		return (power);
	if (ft_isinf(base) || ft_isinf(power))
		return (check_ur_6(base, power));
	if (power < 0.0)
		return (1.0 / ft_pow(base, -power));
	if (base < 0.0)
		return (minus_base(base, power));
	return (ft_exp(power * ft_log(base)));
}

static inline double
	minus_base(register double base, register double power)
{
	if (ft_floor(power) == power)
	{
		if ((int)power % 2 == 0)
			return (ft_pow(-base, power));
		return (-ft_pow(-base, power));
	}
	return (-(0.0 / 0.0));
}

static inline double
	check_ur_6(register double base, register double power)
{
	if (ft_isinf(power) == -1)
		return (0.0);
	if (ft_isinf(power))
		return (power);
	if (power < 0.0)
		return (-0.0);
	return (base);
}
