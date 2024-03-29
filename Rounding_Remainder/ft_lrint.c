/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lrint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 00:38:30 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/20 00:41:33 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* INCLUDES */
#include "../ft_math.h"
/* INCLUDES */

long int
	ft_lrint(register double x)
{
	if (x > 0.0)
		return ((long int)(x + 0.5));
	if (x < 0.0)
		return ((long int)(x - 0.5));
	return (x);
}
