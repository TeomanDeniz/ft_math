/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_powf.c                                          :+:      :+:    :+:   */
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
#  float ft_expf(float);
#  float ft_logf(float);
#  float ft_floorf(float);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

/* *************************** [v] PROTOTYPES [v] *************************** */
extern __inline__ float	check_your_six(float base, float power);
extern __inline__ float	base_is_minus(register float base, \
register float power);
/* *************************** [^] PROTOTYPES [^] *************************** */

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

extern __inline__ float
	base_is_minus(register float base, register float power)
{
	if (ft_floorf(power) == power)
	{
		if ((int)power % 2 == 0)
			return (ft_powf(-base, power));
		return (-ft_powf(-base, power));
	}
	return (-(0.0F / 0.0F));
}

extern __inline__ float
	check_your_six(float base, float power)
{
	if (ft_isinf(power) == -1)
		return (0.0F);
	if (ft_isinf(power))
		return (power);
	if (power < 0.0F)
		return (-0.0F);
	return (base);
}
