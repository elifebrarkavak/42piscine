/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikavak <elikavak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 10:53:03 by elikavak          #+#    #+#             */
/*   Updated: 2024/09/01 15:56:15 by elikavak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char **strs, int size)
{
	int	i;
	int	j;
	int	total;

	i = 0;
	j = 0;
	total = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			j++;
			total++;
		}
		i++;
	}
	return (total);
}

int	ft_seplen(char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	int		total;
	char	*res;

	i = 0;
	j = 0;
	k = 0;
	total = ft_strlen(strs, size) + ((size - 1) * ft_seplen(sep));
	res = (char *)malloc(sizeof(char) * (total + 1));
	if (!res)
		return (0);
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			res[k++] = strs[i][j++];
		j = 0;
		while (sep[j] && i != size - 1)
			res[k++] = sep[j++];
		i++;
	}
	res[k] = '\0';
	return (res);
}
