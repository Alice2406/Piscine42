/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 09:42:09 by aniezgod          #+#    #+#             */
/*   Updated: 2021/07/03 16:06:35 by rcolau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	rush00(int x, int y);
void	rush01(int x, int y);
void	rush02(int x, int y);
void	rush03(int x, int y);
void	rush04(int x, int y);
void	ft_putchar(char c);

int	ft_atoi(char *str)
{
	int	i;
	int	number;
	int	negatif;

	i = 0;
	number = 0;
	negatif = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\n' || str[i] == '\f' || str[i] == '\r')
	{
		i++;
	}
	if (str[i] == '-')
	{
		negatif = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + (str[i] - 48);
		i++;
	}
	return (number * negatif);
}

int	main(int argc, char **argv)
{
	int	a;
	int	b;
	int	r;

	a = 0;
	b = 0;
	if (argc > 3)
	{
		r = ft_atoi(argv[1]);
		if (r == 0)
			rush00(ft_atoi(argv[2]), ft_atoi(argv[3]));
		if (r == 1)
			rush01(ft_atoi(argv[2]), ft_atoi(argv[3]));
		if (r == 2)
			rush02(ft_atoi(argv[2]), ft_atoi(argv[3]));
		if (r == 3)
			rush03(ft_atoi(argv[2]), ft_atoi(argv[3]));
		if (r == 4)
			rush04(ft_atoi(argv[2]), ft_atoi(argv[3]));
	}
	else if (argc == 3)
		rush01(ft_atoi(argv[1]), ft_atoi(argv[2]));
	else
		rush01(20, 10);
	return (0);
}
