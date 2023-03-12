/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swish.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 21:34:17 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/12 21:34:19 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../ft_math.h"

static inline double
	check_your_six(register double x)
{
	if (ft_isnan(x) || ft_isinf(x) == 1 || x == 0.0)
		return (x);
	return (-(0.0 / 0.0));
}

double
	ft_swish(register double x)
{
	if (ft_isinf(x) || ft_isnan(x) || x == 0.0)
		return (check_your_six(x));
	return (x * ft_sigmoid(x));
}
