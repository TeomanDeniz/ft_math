/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_csc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 18:49:11 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/12 18:50:30 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../ft_math.h"

double
	ft_csc(register double x)
{
	return (1.0 / ft_sin(x));
}

