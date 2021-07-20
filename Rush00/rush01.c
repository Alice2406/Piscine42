/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcolau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 12:16:48 by rcolau            #+#    #+#             */
/*   Updated: 2021/07/03 13:58:54 by rcolau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush01(int x, int y)
{
	int	column;
	int	line;

	line = 0;
	while (line < y)
	{
		column = 0;
		while (column < x)
		{
			if ((line == 0 && column == 0) || (line == (y - 1)
					&& column == (x - 1) && x > 1 && y > 1))
				ft_putchar('/');
			else if ((line == 0 && column == (x - 1))
				|| (line == (y - 1) && column == 0))
				ft_putchar('\\');
			else if ((line == 0 || line == (y - 1))
				|| (column == 0 || column == (x - 1)))
				ft_putchar('*');
			else
				ft_putchar(' ');
			column++;
		}
		ft_putchar('\n');
		line++;
	}
}
