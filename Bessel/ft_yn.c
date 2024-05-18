/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_yn.c                                            :+:      :+:    :+:   */
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
# double ft_fabs(double);
# double ft_y0(double);
# double ft_y1(double);
#        */
/* **************************** [^] INCLUDES [^] **************************** */

/* *************************** [v] PROTOTYPES [v] *************************** */
extern __inline__ int		n_abs(int n);
extern __inline__ double	check_your_six(register int n, double x, int sign);
/* *************************** [^] PROTOTYPES [^] *************************** */

double
	ft_yn(register int n, register double x)
{
	double			result;
	register double	temp;
	register double	y0_epsion;
	register int	sign;
	register int	counter;

	sign = 1;
	if (n < 0 && n % 2)
		sign = -1;
	n = n_abs(n);
	if (x == 0.0 || ft_isinf(x) || ft_isnan(x) || n == 0 || n == 1)
		return (check_your_six(n, x, sign));
	x = ft_fabs(x);
	y0_epsion = ft_y0(x);
	result = ft_y1(x);
	counter = 0;
	while (++counter, counter < n)
	{
		temp = result;
		result = (2.0 * counter / x) * result - y0_epsion;
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

extern __inline__ double
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
