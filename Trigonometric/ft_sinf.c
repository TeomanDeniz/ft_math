/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sinf.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 11:38:23 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************* [v] MAGIC NUMBERS [v] ************************** */
#define S1 -1.66666666666666324348E-01F
#define S2 8.33333333332248946124E-03F
#define S3 -1.98412698298579493134E-04F
#define S4 2.75573137070700676789E-06F
#define S5 -2.50507602534068634195E-08F
#define S6 1.58969099521155010221E-10F
/* ************************* [^] MAGIC NUMBERS [^] ************************** */

float
	ft_sinf(float x)
{
	float			result;
	register float	x_x;
	register float	x_x_x;
	register float	magic;
	register int	floating_point_bits;

	if (((x) - ((int)(x / 3.141592F)) * (3.141592F)) != \
		((x) - ((int)(x / 6.283184F)) * (6.283184F)))
		x *= -1.0F;
	x = ((x) - ((int)(x / 3.141592F)) * (3.141592F));
	floating_point_bits = *(int *)&x & 0X7FFFFFFF;
	if (floating_point_bits < 0X3E400000)
		if ((int)x == 0)
			return (x);
	x_x = x * x;
	x_x_x = x_x * x;
	magic = S2 + x_x * (S3 + x_x * (S4 + x_x * (S5 + x_x * S6)));
	result = x - ((x_x * (-x_x_x * magic)) - x_x_x * S1);
	return (result);
}
