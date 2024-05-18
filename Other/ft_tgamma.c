/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tgamma.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:21:31 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
# define M_PIX2
#    int ft_isinf(double);
#    int ft_isnan(double);
# double ft_sqrt(double);
# double ft_exp(double);
# double ft_pow(double, double);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

/* *************************** [v] PROTOTYPES [v] *************************** */
extern __inline__ void	settings_filler(double *setting);
/* *************************** [^] PROTOTYPES [^] *************************** */

double
	ft_tgamma(register double x)
{
	double			setting[20];
	register int	counter;
	double			result;

	if (ft_isinf(x) == -1 || ((double)((double)x - (long)x) == 0.0))
		return (-(0.0 / 0.0));
	if (ft_isinf(x) || ft_isnan(x))
		return (x);
	counter = 0;
	setting[0] = ft_sqrt(M_PIX2);
	settings_filler(setting);
	result = setting[0];
	while (++counter, counter < 20)
		result += setting[counter] / (x + counter);
	result *= ft_exp(-(x + 20.0)) * ft_pow(x + 20.0, x + 0.5);
	if (ft_isnan(result / x))
		return (0.0 * (((long)x % 2L == 0L) * -1.0));
	result /= x;
	return (result);
}

extern __inline__ void
	settings_filler(double *setting)
{
	register double	factoriel;
	register int	counter;

	factoriel = 1.0;
	counter = 0;
	while (++counter, counter < 20)
	{
		setting[counter] = ft_exp(20.0 - (double)counter) * \
			ft_pow(20.0 - (double)counter, \
			(double)counter - 0.5) / (factoriel);
		factoriel *= (double)-counter;
	}
}

/*
 * Sorry but wtf
 *
 * Used from https://rosettacode.org/wiki/Gamma_function#C
 */
