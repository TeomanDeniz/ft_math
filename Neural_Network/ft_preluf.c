/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_preluf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:11:53 by hdeniz            #+#    #+#             */
/*   Updated: 2023/03/20 01:00:54 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

float
	ft_preluf(register float x, register float alpha)
{
	if (x > 0.0F)
		return (x);
	return (alpha * x);
}
