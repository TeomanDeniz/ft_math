/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_jnf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 22:20:11 by hdeniz            #+#    #+#             */
/*   Updated: 2024/06/02 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
#    int ft_isnan(double);
#    int ft_isinf(double);
#  float ft_fabsf(float);
#  float ft_pow(float, float);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

/* *************************** [v] PROTOTYPES [v] *************************** */
extern __inline__ float	check_your_six(float x);
extern __inline__ float	factorial(int n);
/* *************************** [^] PROTOTYPES [^] *************************** */

float
	ft_jnf(register int n, register float x)
{
	register float	denominator;
	register float	numerator;
	register int	counter;
	register float	sign;
	float			sum;

	if (ft_isnan(x) || ft_isinf(x) || x == 0.0F)
		return (check_your_six(x));
	sign = 1.0F;
	if ((n < 0) && (n % 2 != 0))
		sign = -1.0;
	n = (int)ft_fabs((double)n);
	sum = 0;
	counter = -1;
	numerator = 1.0F;
	denominator = 1.0F;
	while (++counter, ft_fabsf(numerator / denominator) > 1E-15)
	{
		numerator = ft_powf(-1.0F, counter) * \
			ft_powf(x / 2.0F, n + 2.0F * counter);
		denominator = factorial(counter) * factorial(n + counter);
		sum += numerator / denominator;
	}
	return (sum * sign);
}

extern __inline__ float
	factorial(int n)
{
	if (n <= 0)
		return (1.0F);
	return ((float)n * factorial(n - 1));
}

extern __inline__ float
	check_your_six(float x)
{
	if (x == 0.0F)
		return (1.0F);
	if (ft_isinf(x))
		return (0.0F);
	return (x);
}
