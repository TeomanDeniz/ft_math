/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sin.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 11:38:23 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************* [v] MAGIC NUMBERS [v] ************************** */
#define S1 -1.66666666666666324348E-01
#define S2 8.33333333332248946124E-03
#define S3 -1.98412698298579493134E-04
#define S4 2.75573137070700676789E-06
#define S5 -2.50507602534068634195E-08
#define S6 1.58969099521155010221E-10
/* ************************* [^] MAGIC NUMBERS [^] ************************** */

double
	ft_sin(double x)
{
	double			result;
	register double	x_x;
	register double	x_x_x;
	register double	magic;
	register int	floating_point_bits;

	if (((x) - ((long)(x / 3.141592)) * (3.141592)) != \
		((x) - ((long)(x / 6.283184)) * (6.283184)))
		x *= -1.0;
	x = ((x) - ((long)(x / 3.141592)) * (3.141592));
	floating_point_bits = *(int *)&x & 0X7FFFFFFF;
	if (floating_point_bits < 0X3E400000)
		if ((long)x == 0U)
			return (x);
	x_x = x * x;
	x_x_x = x_x * x;
	magic = S2 + x_x * (S3 + x_x * (S4 + x_x * (S5 + x_x * S6)));
	result = x - ((x_x * (-x_x_x * magic)) - x_x_x * S1);
	return (result);
}
