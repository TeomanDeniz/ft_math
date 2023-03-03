/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cos.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 11:38:23 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/16 18:23:07 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_math.h"

double
	ft_cos(register double x)
{
	register double			result;
	register double			term;
	register unsigned int	i;

	if (ft_isinf(x))
		return (0.0 / 0.0);
	result = 1.0;
	term = 1.0;
	i = 0;
	x = ft_fmod(x, 2 * M_PI);
	while (i++, ft_fabs(term) > 1E-15)
	{
		term = -term * x * x / (2 * i - 1) / (2 * i);
		result += term;
	}
	return (result);
}
