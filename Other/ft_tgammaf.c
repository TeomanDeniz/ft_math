/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tgammaf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:21:31 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
# define M_PIX2_F
#    int ft_isinf(double);
#    int ft_isnan(double);
#  float ft_sqrtf(float);
#  float ft_expf(float);
#  float ft_powf(float, float);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

/* *************************** [v] PROTOTYPES [v] *************************** */
extern __inline__ void	settings_filler(float *setting);
/* *************************** [^] PROTOTYPES [^] *************************** */

float
	ft_tgammaf(register float x)
{
	float			setting[20];
	register int	counter;
	float			result;

	if (ft_isinf(x) == -1 || ((float)((float)x - (int)x) == 0.0F))
		return (-(0.0F / 0.0F));
	if (ft_isinf(x) || ft_isnan(x))
		return (x);
	counter = 0;
	setting[0] = ft_sqrtf(M_PIX2_F);
	settings_filler(setting);
	result = setting[0];
	while (++counter, counter < 20)
		result += setting[counter] / (x + counter);
	result *= ft_expf(-(x + 20.0F)) * ft_powf(x + 20.0F, x + 0.5F);
	if (ft_isnan(result / x))
		return (0.0F * (((int)x % 2 == 0) * -1.0F));
	result = result / x;
	return (result);
}

extern __inline__ void
	settings_filler(float *setting)
{
	register float	factoriel;
	register int	counter;

	factoriel = 1.0F;
	counter = 0;
	while (++counter, counter < 20)
	{
		setting[counter] = ft_expf(20.0F - (float)counter) * \
			ft_powf(20.0F - (float)counter, \
			(float)counter - 0.5F) / (factoriel);
		factoriel *= (float)-counter;
	}
}

/*
 * Sorry but wtf is that shit?
 *
 * Used from https://rosettacode.org/wiki/Gamma_function#C
 */
