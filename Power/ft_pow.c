/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 16:38:18 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
#    int ft_isnan(double);
#    int ft_isinf(double);
# double ft_exp(double);
# double ft_log(double);
# double ft_floor(double);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

/* *************************** [v] PROTOTYPES [v] *************************** */
extern __inline__ double	check_your_six(double base, double power);
extern __inline__ double	minus_base(register double base, \
register double power);
/* *************************** [^] PROTOTYPES [^] *************************** */

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
		return (check_your_six(base, power));
	if (power < 0.0)
		return (1.0 / ft_pow(base, -power));
	if (base < 0.0)
		return (minus_base(base, power));
	return (ft_exp(power * ft_log(base)));
}

extern __inline__ double
	minus_base(register double base, register double power)
{
	if (ft_floor(power) == power)
	{
		if ((long)power % 2L == 0L)
			return (ft_pow(-base, power));
		return (-ft_pow(-base, power));
	}
	return (-(0.0 / 0.0));
}

extern __inline__ double
	check_your_six(double base, double power)
{
	if (ft_isinf(power) == -1)
		return (0.0);
	if (ft_isinf(power))
		return (power);
	if (power < 0.0)
		return (-0.0);
	return (base);
}
