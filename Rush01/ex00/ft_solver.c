/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solver.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 18:20:20 by aniezgod          #+#    #+#             */
/*   Updated: 2021/07/12 15:06:17 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int		check_up(int **plateau, int *regles);
int		check_doublon(int **plateau);
void	print_tab(int **tab);

int	ft_solve_final(int *regles, int **tab, int i)
{
	if (tab[i / 4][i % 4] != 0)
	{
		if (check_up(tab, regles) && check_doublon(tab))
		{
			print_tab(tab);
			return (1);
		}
	}
	else
	{
		while (tab[i / 4][i % 4] < 4)
		{
			tab[i / 4][i % 4]++;
			if (check_up(tab, regles) && check_doublon(tab))
			{
				print_tab(tab);
				return (1);
			}
		}
		tab[i / 4][i % 4] = 0;
	}
	return (0);
}

int	ft_solver(int *regles, int **tab, int i)
{
	if (i == 15)
	{
		if (ft_solve_final(regles, tab, i))
			return (1);
	}
	else if (i < 15)
	{
		if (tab[i / 4][i % 4] != 0)
		{
			if (ft_solver(regles, tab, i + 1) == 1)
				return (1);
		}
		else
		{
			while (tab[i / 4][i % 4] < 4)
			{
				tab[i / 4][i % 4]++;
				if (ft_solver(regles, tab, i + 1) == 1)
					return (1);
			}
			tab[i / 4][i % 4] = 0;
		}
	}
	return (0);
}
