/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 16:29:31 by aniezgod          #+#    #+#             */
/*   Updated: 2021/07/11 22:41:07 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		ft_strlen(char *str);
int		ft_error(void);
int		*ft_tab_arg(char *str, int *tab);
int		**plateau(int **tab);
int		ft_solver(int *regles, int **tab, int i);
void	print_tab(int **tab);
int		**remplissage(int **tab, int *regles);
int		verifier_arg(int *tab);
int		check_doublon(int **plateau);

int	main(int argc, char **argv)
{
	int	i;
	int	**tab;
	int	*regles;

	i = -1;
	regles = malloc(sizeof(int) * 16);
	tab = malloc(sizeof(int *) * 4);
	while (++i < 4)
		tab[i] = malloc(sizeof(int) * 4);
	if (argc != 2 || ft_strlen(argv[1]) != 31)
		return (ft_error());
	else
	{
		tab = plateau(tab);
		regles = ft_tab_arg(argv[1], regles);
		if (verifier_arg(regles))
			return (ft_error());
		tab = remplissage(tab, regles);
		if (check_doublon(tab) == 0)
			return (ft_error());
		if (ft_solver(regles, plateau(tab), 0) == 0)
			 return (ft_error());
	}
	return (0);
}
