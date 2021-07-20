/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 11:48:04 by aniezgod          #+#    #+#             */
/*   Updated: 2021/07/04 16:19:17 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	rush02(int x, int y)
{
	int	a;
	int	b;

	a = 0;
	while (a < y && x > 0)
	{
		b = 0;
		while (b < x)
		{
			if ((a == 0) && (b == 0 || b == (x - 1)))
				ft_putchar('A');
			else if ((a == (y - 1)) && (b == 0 || b == (x - 1)))
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
