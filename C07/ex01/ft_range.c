/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 15:27:22 by aniezgod          #+#    #+#             */
/*   Updated: 2021/07/21 15:31:31 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	j;
	int	diff;

	if (min >= max)
		return (NULL);
	diff = max - min;
	i = 0;
	j = min;
	tab = malloc(sizeof(int) * diff + 1);
	if (tab == NULL)
		return (0);
	while (i < diff)
	{
		tab[i] = j;
		j++;
		i++;
	}
	return (tab);
}
