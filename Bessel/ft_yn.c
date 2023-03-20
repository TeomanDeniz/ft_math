/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_yn.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 11:32:11 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/20 01:59:06 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../ft_math.h"

static inline int		n_abs(register int n);
static inline double	check_your_six(register int n, double x, int sign);

double
	ft_yn(register int n, register double x)
{
	register double	temp;
	register double	a;
	register double	b;
	register int	sign;
	register int	i;

	sign = 1;
	if (n < 0 && n % 2)
		sign = -1;
	n = n_abs(n);
	if (x == 0.0 || ft_isinf(x) || ft_isnan(x) || n == 0 || n == 1)
		return (check_your_six(n, x, sign));
	x = ft_fabs(x);
	a = ft_y0(x);
	b = ft_y1(x);
	i = 0;
	while (++i, i < n)
	{
		temp = b;
		b = (2.0 * i / x) * b - a;
		a = temp;
	}
	return (sign * b);
}

static inline int
	n_abs(register int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

static inline double
	check_your_six(register int n, double x, int sign)
{
	if (x == 0.0)
		return (-(1.0 / 0.0));
	if (ft_isnan(x))
		return (x);
	if (ft_isinf(x) == 1)
		return (0.0);
	if (ft_isinf(x) == -1)
		return (-(0.0 / 0.0));
	if (n == 0)
		return (ft_y0(x));
	if (n == 1)
		return (sign * ft_y1(x));
	return (x);
}
