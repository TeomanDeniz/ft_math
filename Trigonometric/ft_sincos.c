/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sincos.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 00:24:21 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/12 00:24:23 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

void
	ft_sincos(register double x, double *sine, double *cosine)
{
	*sine = ft_sin(x);
	*cosine = ft_cos(x);
}
