/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sigmoid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 21:17:45 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/09 21:17:46 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../ft_math.h"

static inline double
	check_your_six(register double x)
{
	if (ft_isnan(x))
		return (x);
	if (ft_isinf(x) == -1)
		return (0.0);
	return (1.0);
}

double
	ft_sigmoid(register double x)
{
	if (ft_isnan(x) || ft_isinf(x))
		return (check_your_six(x));
	return (1 / (1 + ft_pow(M_E, -x)));
}

/*
 * Original creator:
 *
 * https://github.com/nayayayay/sigmoid-function
 */
