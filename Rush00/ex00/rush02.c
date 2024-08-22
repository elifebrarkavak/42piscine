/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikavak <elikavak@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 12:49:09 by elikavak          #+#    #+#             */
/*   Updated: 2024/08/18 13:03:30 by elikavak         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_line(int x, char first_c, char mid_c, char last_c)
{
	int	which_char;

	which_char = 1;
	while (which_char <= x)
	{
		if (which_char == 1)
		{
			ft_putchar(first_c);
		}
		else if (which_char == x)
		{
			ft_putchar(last_c);
		}
		else
		{
			ft_putchar(mid_c);
		}
		which_char++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	which_line;

	which_line = 1;
	if (x <= 0 || y <= 0)
		return ;
	while (which_line <= y)
	{
		if (which_line == 1)
		{
			print_line(x, 'A', 'B', 'A');
		}
		else if (which_line == y)
		{
			print_line(x, 'C', 'B', 'C');
		}
		else
		{
			print_line(x, 'B', ' ', 'B');
		}
		which_line++;
	}
}
