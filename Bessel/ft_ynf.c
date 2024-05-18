/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ynf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 11:32:11 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */
#include "../ft_math.h" /*
#    int ft_isinf(double);
#    int ft_isnan(double);
#  float ft_fabsf(float);
#  float ft_y0f(float);
#  float ft_y1f(float);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

/* *************************** [v] PROTOTYPES [v] *************************** */
extern __inline__ float	check_your_six(register int n, float x, int sign);
extern __inline__ int	n_abs(int n);
/* *************************** [^] PROTOTYPES [^] *************************** */

float
	ft_ynf(register int n, register float x)
{
	float			result;
	register float	temp;
	register float	y0_epsion;
	register int	sign;
	register int	counter;

	sign = 1;
	if (n < 0 && n % 2)
		sign = -1;
	n = n_abs(n);
	if (x == 0.0F || ft_isinf(x) || ft_isnan(x) || n == 0 || n == 1)
		return (check_your_six(n, x, sign));
	x = ft_fabsf(x);
	y0_epsion = ft_y0f(x);
	result = ft_y1f(x);
	counter = 0;
	while (++counter, counter < n)
	{
		temp = result;
		result = (2.0F * counter / x) * result - y0_epsion;
		y0_epsion = temp;
	}
	result *= sign;
	return (result);
}

extern __inline__ int
	n_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

extern __inline__ float
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
