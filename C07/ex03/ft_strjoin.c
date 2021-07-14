/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 12:55:54 by aniezgod          #+#    #+#             */
/*   Updated: 2021/07/14 23:19:28 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return(i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	int size_all_strs;
	int size_all_chaine;
	char *chaine;
	i = 0;
	size_all_strs = 0;
	if (size <= 0)
	{
		chaine = malloc(sizeof(char));
		return (chaine);
	}
	while (i < size)
	{
		size_all_strs = size_all_strs + ft_strlen(strs[i]);
		i++;
	}
	size_all_chaine = size_all_strs + ft_strlen(sep) * (size - 1);
	chaine = malloc(sizeof(char) * size_all_chaine);
	i = 0;
	while (i < size)
	{
		chaine = ft_strcat(chaine, strs[i]);
		while (i < size - 1)
			chaine = ft_strcat(chaine, sep);
		i++;
	}
	return(chaine);
}

#include <stdio.h>

char *ft_strjoin(int size, char **strs, char *sep);

int	main(int argc, char **argv)
{
	printf("./ex03/output___said___this___is___a___success :\n");
	printf("%s\n",  ft_strjoin(argc, argv, "___"));
}
