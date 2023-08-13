/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_significand.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 21:48:11 by hdeniz            #+#    #+#             */
/*   Updated: 2023/08/13 21:48:12 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_math.h" /*
#    int ft_isinf(double);
#    int ft_isnan(double);
*/

union u_double_bits {
	double	value;
	struct	{
		unsigned long long	fraction : 52;
		unsigned short		exponent : 11;
		unsigned char		sign : 1;
	} s_parts;
};

double
	ft_significand(register double x)
{
	union u_double_bits	bits;

	if (ft_isnan(x) || ft_isinf(x) || x == 0.0)
		return (x);
	bits.value = x;
	bits.s_parts.exponent = 1023;
	bits.s_parts.sign = 0;
	return (bits.value);
}
