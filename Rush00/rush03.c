/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 12:32:46 by aniezgod          #+#    #+#             */
/*   Updated: 2021/07/04 16:20:12 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush03(int x, int y)
{
	int	a;
	int	b;

	a = 0;
	while (a < y && x > 0)
	{
		b = 0;
		while (b < x)
		{
			if ((b == 0) && (a == 0 || a == (y - 1)))
				ft_putchar('A');
			else if ((b == (x - 1)) && (a == 0 || a == (y - 1)))
				ft_putchar('C');
			else if ((a == 0) || (b == 0) || (a == (y - 1)) || (b == (x - 1)))
				ft_putchar('B');
			else
				ft_putchar(' ');
			b++;
		}
		ft_putchar('\n');
		a++;
	}
}
