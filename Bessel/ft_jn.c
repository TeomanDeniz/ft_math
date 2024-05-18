/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_jn.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 22:20:11 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
#    int ft_isnan(double);
#    int ft_isinf(double);
# double ft_fabs(double);
# double ft_pow(double, double);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

/* *************************** [v] PROTOTYPES [v] *************************** */
extern __inline__ double	check_your_six(double x);
extern __inline__ double	factorial(int n);
/* *************************** [^] PROTOTYPES [^] *************************** */

double
	ft_jn(register int n, register double x)
{
	register double	denominator;
	register double	numerator;
	register int	counter;
	register double	sign;
	double			sum;

	if (ft_isnan(x) || ft_isinf(x) || x == 0.0)
		return (check_your_six(x));
	sign = 1.0;
	if ((n < 0) && (n % 2 != 0))
		sign = -1.0;
	n = (int)ft_fabs((double)n);
	sum = 0;
	counter = -1;
	numerator = 1.0;
	denominator = 1.0;
	while (++counter, ft_fabs(numerator / denominator) > 1E-15)
	{
		numerator = ft_pow(-1.0, counter) * ft_pow(x / 2.0, n + 2.0 * counter);
		denominator = factorial(counter) * factorial(n + counter);
		sum += numerator / denominator;
	}
	return (sum * sign);
}

extern __inline__ double
	factorial(int n)
{
	if (n <= 0)
		return (1.0);
	return ((double)n * factorial(n - 1));
}

extern __inline__ double
	check_your_six(double x)
{
	if (x == 0.0)
		return (1.0);
	if (ft_isinf(x))
		return (0.0);
	return (x);
}
