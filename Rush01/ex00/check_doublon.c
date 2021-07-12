/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_doublon.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 15:41:11 by aniezgod          #+#    #+#             */
/*   Updated: 2021/07/12 14:43:58 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_doublon_line(int *plateau)
{
	int	i;
	int	k;

	i = 0;
	while (i < 4)
	{
		k = i + 1;
		while (k < 4)
		{
			if (plateau[i] == plateau[k] && plateau[i] != 0)
				return (0);
			k++;
		}
		i++;
	}
	return (1);
}

int	check_doublon_column(int **plateau, int j)
{
	int	i;
	int	k;

	i = 0;
	while (i < 4)
	{
		k = i + 1;
		while (k < 4)
		{
			if (plateau[i][j] == plateau[k][j] && plateau[i][j] != 0)
				return (0);
			k++;
		}
		i++;
	}
	return (1);
}

int	check_doublon(int **plateau)
{
	int	i;

	i = -1;
	while (++i < 4)
	{
		if (!check_doublon_line(plateau[i])
			|| !check_doublon_column(plateau, i))
			return (0);
	}
	return (1);
}
