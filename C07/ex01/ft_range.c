/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 12:37:09 by aniezgod          #+#    #+#             */
/*   Updated: 2021/07/13 19:35:01 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	j;

	i = 0;
	j = max - min;
	if (min >= max)
		return (NULL);
	tab = malloc(j * sizeof(int));
	if (tab == 0)
		return (NULL);
	while (i <= max)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
