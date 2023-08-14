/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sincosf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 00:24:21 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/19 20:27:23 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

void
	ft_sincosf(register float x, float *sine, float *cosine)
{
	*sine = ft_sinf(x);
	*cosine = ft_cosf(x);
}
