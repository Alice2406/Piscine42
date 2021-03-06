/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plateau.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 16:28:49 by aniezgod          #+#    #+#             */
/*   Updated: 2021/07/12 14:29:53 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	**plateau(int **tab)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		tab[i / 4][i % 4] = 0;
		i++;
	}
	return (tab);
}
