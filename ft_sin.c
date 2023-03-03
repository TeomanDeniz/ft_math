/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sin.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 11:38:23 by hdeniz            #+#    #+#             */
/*   Updated: 2023/02/16 18:21:53 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_math.h"

double
	ft_sin(register double x)
{
	register double			result;
	register double			term;
	register unsigned int	i;

	if (ft_isinf(x))
		return (0.0 / 0.0);
	x = ft_fmod(x, 2 * M_PI);
	i = 3;
	term = x;
	result = x;
	while (ft_fabs(term) > 1E-15)
	{
		term = -term * x * x / (i * (i - 1));
		result += term;
		i += 2;
	}
	return (result);
}
