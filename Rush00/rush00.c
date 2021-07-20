/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 09:42:05 by aniezgod          #+#    #+#             */
/*   Updated: 2021/07/03 15:12:20 by rcolau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush00(int x, int y)
{
	int	a;
	int	b;

	a = 0;
	while (a < y)
	{
		b = 0;
		while (b < x)
		{
			if ((b == 0 || b == (x - 1)) && (a == 0 || a == (y - 1)))
				ft_putchar('o');
			else if (a == 0 || a == (y - 1))
				ft_putchar('-');
			else if ((a > 0 || a < y) && (b == 0 || b == (x - 1)))
				ft_putchar('|');
			else
				ft_putchar(' ');
			b++;
		}
		ft_putchar('\n');
		a++;
	}
}
