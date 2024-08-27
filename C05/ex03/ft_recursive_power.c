/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikavak <elikavak@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 11:30:59 by elikavak          #+#    #+#             */
/*   Updated: 2024/08/25 11:41:52 by elikavak         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = power;
	if (power > 1)
	{
		power -= 1;
		return (nb * ft_recursive_power(nb, power));
	}
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (nb);
}
