/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikavak <elikavak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 13:58:31 by elikavak          #+#    #+#             */
/*   Updated: 2024/09/01 15:56:28 by elikavak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*res;

	i = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	res = (int *)malloc(sizeof(int) * i);
	if (res == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = res;
	i = 0;
	while (max > min)
	{
		res[i] = min;
		min++;
		i++;
	}
	return (i);
}
