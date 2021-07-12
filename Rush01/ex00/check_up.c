/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_up.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 18:44:08 by aniezgod          #+#    #+#             */
/*   Updated: 2021/07/11 21:32:04 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_up_line(int *plateau, int regle)
{
	int	i;
	int	visible;
	int	bigger;

	visible = 0;
	i = 0;
	bigger = 0;
	while (i < 4)
	{
		if (bigger < plateau[i])
		{
			bigger = plateau[i];
			visible++;
		}
		i++;
	}
	if (visible == regle)
		return (1);
	else
		return (0);
}	

int	check_up_line_reverse(int *plateau, int regle)
{
	int	i;
	int	visible;
	int	bigger;

	visible = 0;
	i = 3;
	bigger = 0;
	while (i >= 0)
	{
		if (bigger < plateau[i])
		{
			bigger = plateau[i];
			visible++;
		}
		i--;
	}
	if (visible == regle)
		return (1);
	else
		return (0);
}

int	check_up_column(int **plateau, int regle, int j)
{
	int	i;
	int	visible;
	int	bigger;

	visible = 0;
	i = 0;
	bigger = 0;
	while (i < 4)
	{
		if (bigger < plateau[i][j])
		{
			bigger = plateau[i][j];
			visible++;
		}
		i++;
	}
	if (visible == regle)
		return (1);
	else
		return (0);
}	

int	check_up_column_reverse(int **plateau, int regle, int j)
{
	int	i;
	int	visible;
	int	bigger;

	visible = 0;
	i = 3;
	bigger = 0;
	while (i >= 0)
	{
		if (bigger < plateau[i][j])
		{
			bigger = plateau[i][j];
			visible++;
		}
		i--;
	}
	if (visible == regle)
		return (1);
	else
		return (0);
}

int	check_up(int **plateau, int *regles)
{
	int	i;

	i = -1;
	while (++i < 16)
	{
		if (i < 4)
		{
			if (!check_up_column(plateau, regles[i], i))
				return (0);
		}
		else if (i < 8)
		{
			if (!check_up_column_reverse(plateau, regles[i], i % 4))
				return (0);
		}
		else if (i < 12)
		{
			if (!check_up_line(plateau[i % 4], regles[i]))
				return (0);
		}
		else
			if (!check_up_line_reverse(plateau[i % 4], regles[i]))
				return (0);
	}
	return (1);
}
