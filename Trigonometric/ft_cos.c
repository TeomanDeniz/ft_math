/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cos.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 11:38:23 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************* [v] MAGIC NUMBERS [v] ************************** */
#define C1 4.16666666666666019037E-02
#define C2 -1.38888888888741095749E-03
#define C3 2.48015872894767294178E-05
#define C4 -2.75573143513906633035E-07
#define C5 2.08757232129817482790E-09
#define C6 -1.13596475577881948265E-11
/* ************************* [^] MAGIC NUMBERS [^] ************************** */

double
	ft_cos(register double x)
{
	double			result;
	register double	x_x;
	register double	magic;
	register double	sign_bit;

	sign_bit = 1.0;
	if (((x) - ((long)(x / 3.141592)) * (3.141592)) != \
		((x) - ((long)(x / 6.283184)) * (6.283184)))
		sign_bit = -1.0;
	x = ((x) - ((long)(x / 3.141592)) * (3.14159));
	x_x = x * x;
	magic = x_x * \
		(C1 + x_x * (C2 + x_x * (C3 + x_x * (C4 + x_x * (C5 + x_x * C6)))));
	result = (1.0 - (0.5 * x_x - x_x * magic)) * sign_bit;
	return (result);
}
