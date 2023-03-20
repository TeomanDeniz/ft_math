/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_jn.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 22:20:11 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/20 02:08:12 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../ft_math.h"

static inline double	check_your_six(register double x);
static inline double	factorial(register int n);

double
	ft_jn(register int n, register double x)
{
	register double	denominator;
	register double	numerator;
	register int	counter;
	register double	sign;
	register double	sum;

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

static inline double
	factorial(register int n)
{
	if (n <= 0)
		return (1.0);
	return ((double)n * factorial(n - 1));
}

static inline double
	check_your_six(register double x)
{
	if (x == 0.0)
		return (1.0);
	if (ft_isinf(x))
		return (0.0);
	return (x);
}
