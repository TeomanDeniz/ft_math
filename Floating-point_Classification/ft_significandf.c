/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_significandf.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 21:48:11 by hdeniz            #+#    #+#             */
/*   Updated: 2023/08/13 21:48:12 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h" /*
#    int ft_isinf(double);
#    int ft_isnan(double);
*/
/* INCLUDES */

union u_float_bits {
	float	value;
	struct	{
		unsigned long long	fraction : 23;
		unsigned short		exponent : 8;
		unsigned char		sign : 1;
	} s_parts;
};

float
	ft_significandf(register float x)
{
	union u_float_bits	bits;

	if (ft_isnan(x) || ft_isinf(x) || x == 0.0F)
		return (x);
	bits.value = x;
	bits.s_parts.exponent = 127;
	bits.s_parts.sign = 0;
	return (bits.value);
}
