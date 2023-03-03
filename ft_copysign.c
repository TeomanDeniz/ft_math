/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copysign.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:49:33 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/02 16:49:34 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_math.h"

double
	ft_copysign(register double x, register double y)
{
	if (y >= 0 || !ft_signbit(y))
		return (ft_fabs(x));
	return (ft_fabs(x) * -1);
}
