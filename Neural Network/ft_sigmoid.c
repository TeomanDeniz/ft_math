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

double
	ft_sigmoid(register double x)
{
	return (1 / (1 + ft_pow(M_E, -x)));
}

/*
 * Original creator:
 *
 * https://github.com/nayayayay/sigmoid-function
 */
