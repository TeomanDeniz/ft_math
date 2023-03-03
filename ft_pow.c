/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 16:38:18 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/01 17:08:54 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_math.h"

static inline double
	base_or_power_is_inf(register double base, register double power)
{
	if (ft_isinf(power) == -1)
		return (0.0);
	if (ft_isinf(power))
		return (power);
	if (power < 0)
		return (-0.0);
	return (base);
}

static inline double
	base_is_minus(register double base, register double power)
{
	if (ft_floor(power) == power)
	{
		if ((int)power % 2 == 0)
			return (ft_pow(-base, power));
		return (-ft_pow(-base, power));
	}
	return (-(0.0 / 0.0));
}

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
		return (base_or_power_is_inf(base, power));
	if (power < 0)
		return (1.0 / ft_pow(base, -power));
	if (base < 0)
		return (base_is_minus(base, power));
	return (ft_exp(power * ft_log(base)));
}
