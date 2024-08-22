/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikavak <elikavak@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 14:12:20 by elikavak          #+#    #+#             */
/*   Updated: 2024/08/18 15:41:13 by elikavak         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_line(int x, char first_c, char mid_c, char last_c)
{
	int	which_c;

	which_c = 1;
	while (which_c <= x)
	{
		if (which_c == 1)
		{
			ft_putchar(first_c);
		}
		else if (which_c == x)
		{
			ft_putchar(last_c);
		}
		else
			ft_putchar(mid_c);
		which_c++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int		which_l;

	which_l = 1;
	if (x <= 0 || y <= 0)
		return ;
	while (which_l <= y)
	{
		if (which_l == 1)
		{
			print_line(x, 'A', 'B', 'C');
		}
		else if (which_l == y)
		{
			print_line(x, 'C', 'B', 'A');
		}
		else
			print_line(x, 'B', ' ', 'B');
		which_l++;
	}
}
