/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpoder <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 18:53:22 by rpoder            #+#    #+#             */
/*   Updated: 2021/07/20 00:58:39 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		src_len;
	char	*dest;
	int		i;

	src_len = ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * src_len + 1);
	if (dest == NULL)
		return (0);
	i = 0;
	while (i < src_len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			j;
	int			i;

	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	j = 1;
	i = 0;
	while (j < ac)
	{
		tab[i].size = ft_strlen(av[j]);
		tab[i].str = av[j];
		tab[i].copy = ft_strdup(av[j]);
		i++;
		j++;
	}
	tab[i].str = 0;
	return (tab);
}
