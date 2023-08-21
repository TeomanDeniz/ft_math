/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeniz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 14:01:18 by hdeniz            #+#    #+#             */
/*   Updated: 2023/08/21 14:01:21 by hdeniz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long long
	ft_fibonacci(unsigned long long number)
{
	if (number <= 1ULL)
		return (number);
	return (ft_fibonacci(number - 1ULL) + ft_fibonacci(number - 2ULL));
}
