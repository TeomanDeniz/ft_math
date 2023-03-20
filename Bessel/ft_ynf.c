/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ynf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 11:32:11 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/20 02:15:06 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../ft_math.h"

static inline int		n_abs(register int n);
static inline float		check_your_six(register int n, float x, int sign);

float
	ft_ynf(register int n, register float x)
{
	register float	temp;
	register float	a;
	register float	b;
	register int	sign;
	register int	i;

	sign = 1;
	if (n < 0 && n % 2)
		sign = -1;
	n = n_abs(n);
	if (x == 0.0F || ft_isinf(x) || ft_isnan(x) || n == 0 || n == 1)
		return (check_your_six(n, x, sign));
	x = ft_fabsf(x);
	a = ft_y0f(x);
	b = ft_y1f(x);
	i = 0;
	while (++i, i < n)
	{
		temp = b;
		b = (2.0F * i / x) * b - a;
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

static inline float
	check_your_six(register int n, float x, int sign)
{
	if (x == 0.0F)
		return (-(1.0F / 0.0F));
	if (ft_isnan(x))
		return (x);
	if (ft_isinf(x) == 1)
		return (0.0F);
	if (ft_isinf(x) == -1)
		return (-(0.0F / 0.0F));
	if (n == 0)
		return (ft_y0f(x));
	if (n == 1)
		return (sign * ft_y1f(x));
	return (x);
}
