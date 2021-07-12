/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remplissage.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 20:17:10 by aniezgod          #+#    #+#             */
/*   Updated: 2021/07/12 14:39:09 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	remplissage_line(int *tab, int regle)
{
	int	i;

	i = -1;
	if (regle == 4)
		while (++i < 4)
			tab[i] = i + 1;
	if (regle == 1)
		tab[0] = 4;
}

void	remplissage_line_reverse(int *tab, int regle)
{
	int	i;

	i = -1;
	if (regle == 4)
		while (++i < 4)
			tab[i] = 4 - i;
	if (regle == 1)
		tab[3] = 4;
}

void	remplissage_column(int **tab, int regle, int j)
{
	int	i;

	i = -1;
	if (regle == 4)
		while (++i < 4)
			tab[i][j] = i + 1;
	if (regle == 1)
		tab[0][j] = 4;
}

void	remplissage_column_reverse(int **tab, int regle, int j)
{
	int	i;

	i = -1;
	if (regle == 4)
		while (++i < 4)
			tab[i][j] = 4 - i;
	if (regle == 1)
		tab[3][j] = 4;
}

int	**remplissage(int **tab, int *regles)
{
	int	i;

	i = -1;
	while (++i < 16)
	{
		if (i < 4)
		{
			remplissage_column(tab, regles[i], i);
		}
		else if (i < 8)
		{
			remplissage_column_reverse(tab, regles[i], i % 4);
		}
		else if (i < 12)
		{
			remplissage_line(tab[i % 4], regles[i]);
		}
		else
		{
			remplissage_line_reverse(tab[i % 4], regles[i]);
		}
	}
	return (tab);
}
