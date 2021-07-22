/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 12:52:16 by aniezgod          #+#    #+#             */
/*   Updated: 2021/07/22 12:52:18 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char **str, char *sep, int size)
{
	int	i;
	int	j;
	int	size_strs;
	int	size_sep;

	i = 0;
	size_strs = 0;
	size_sep = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			size_strs++;
			j++;
		}
		i++;
	}
	i = 0;
	while (sep[i])
	{
		size_sep++;
		i++;
	}
	return (size_sep * (size - 1) + size_strs);
}

char	*ft_strcat(char *dest, char *src, int i)
{
	int	l;
	int	j;

	l = 0;
	j = 0;
	while (dest[l] && i != 0)
		l++;
	while (src[j])
	{
		dest[l + j] = src[j];
		j++;
	}
	dest[l + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*chaine;

	if (size <= 0)
	{
		chaine = malloc(0);
		return (chaine);
	}
	chaine = malloc(sizeof(char) * (ft_strlen(strs, sep, size) + 1));
	if (!chaine)
		return (NULL);
	i = 0;
	chaine[0] = '\0';
	while (i < size)
	{
		chaine = ft_strcat(chaine, strs[i], i);
		i++;
		if (i < size)
			chaine = ft_strcat(chaine, sep, i);
	}
	return (chaine);
}
