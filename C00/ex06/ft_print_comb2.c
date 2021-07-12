/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_com2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 18:53:31 by aniezgod          #+#    #+#             */
/*   Updated: 2021/06/30 21:31:40 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			if (b != 1)
				write(1, ", ", 1);
			ft_putchar((a / 10) + 48);
			ft_putchar((a % 10) + 48);
			write(1, " ", 1);
			ft_putchar((b / 10) + 48);
			ft_putchar((b % 10) + 48);
			b++;
		}
		a++;
	}
}
