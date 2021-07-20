/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apfeiffe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 12:28:03 by apfeiffe          #+#    #+#             */
/*   Updated: 2021/07/03 15:27:01 by rcolau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush04(int x, int y)
{
	int	a;
	int	b;

	a = 0;
	while (a < y)
	{
		b = 0;
		while (b < x)
		{
			if ((b == 0 && a == 0 ) || (b == (x - 1) && (a == y - 1)))
				ft_putchar('A');
			else if (((b == x - 1) && a == 0) || (b == 0 && (a == y - 1)))
				ft_putchar('C');
			else if (a == 0 || a == (y - 1))
				ft_putchar('B');
			else if ((a > 0 || a < y) && (b == 0 || b == (x - 1)))
				ft_putchar('B');
			else
				ft_putchar(' ');
			b++;
		}
		ft_putchar('\n');
		a++;
	}
}
