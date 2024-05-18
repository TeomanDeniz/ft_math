/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cosf.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <Discord:@teomandeniz>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 11:38:23 by hdeniz            #+#    #+#             */
/*   Updated: 2024/05/18 ??:??:?? by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************* [v] MAGIC NUMBERS [v] ************************** */
#define C1 4.16666666666666019037E-02F
#define C2 -1.38888888888741095749E-03F
#define C3 2.48015872894767294178E-05F
#define C4 -2.75573143513906633035E-07F
#define C5 2.08757232129817482790E-09F
#define C6 -1.13596475577881948265E-11F
/* ************************* [^] MAGIC NUMBERS [^] ************************** */

float
	ft_cosf(register float x)
{
	float			result;
	register float	x_x;
	register float	magic;
	register float	sign_bit;

	sign_bit = 1.0F;
	if (((x) - ((int)(x / 3.141592F)) * (3.141592F)) != \
		((x) - ((int)(x / 6.283184F)) * (6.283184F)))
		sign_bit = -1.0F;
	x = ((x) - ((int)(x / 3.141592F)) * (3.141592F));
	x_x = x * x;
	magic = x_x * \
		(C1 + x_x * (C2 + x_x * (C3 + x_x * (C4 + x_x * (C5 + x_x * C6)))));
	result = (1.0F - (0.5F * x_x - x_x * magic)) * sign_bit;
	return (result);
}
