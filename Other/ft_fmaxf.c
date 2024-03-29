/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fmaxf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 21:24:18 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/19 21:54:21 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

float
	ft_fmaxf(register float x, register float y)
{
	if (x > y)
		return (x);
	return (y);
}
