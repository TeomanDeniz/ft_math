/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_round.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 14:37:55 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/02 14:37:56 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

double
	ft_round(register double x)
{
	double			intpart;
	register double	fracpart;

	if (ft_isnan(x) || ft_isinf(x) || x == 0.0)
		return (x);
	fracpart = ft_modf(x, &intpart);
	if (x > 0.0)
	{
		if (fracpart >= 0.5)
			return (intpart + 1.0);
		return (intpart);
	}
	if (fracpart <= -0.5)
		return (intpart - 1.0);
	return (intpart);
}
