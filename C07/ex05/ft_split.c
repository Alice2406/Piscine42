/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 15:17:19 by aniezgod          #+#    #+#             */
/*   Updated: 2021/07/15 17:08:01 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int count_words;

	i = 0;
	count_words = 0;
	while (str[i])
	{
		if(str[i] == charset[0])
			count_words++;
		i++;
	}
	return (count_words);
}

int longuest_words(char *str, char *charset)
{
	int longuest_words;
	int	i;
	int j;

	i = 0;
	j = 0;
	longuest_words = 0;
	while(str[i])
	{
		if(str[i] == charset[0] && j < longuest_words)
		{
			longuest_words = j;
			j = 0;
			i = i + ft_strlen(charset) - 1;
		}
		j++;
		i++;
	}
	return (longuest_words);
}

char	*ft_strcpy(char *dest, char *src, char *charset)
{
	int	i;

	i = 0;
	while (src[i] != charset[0])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	int mots;
	int **chaine;
	int i;
	
	i = 0;
	mots = count_words(str, charset);
	chaine = malloc(sizeof(char) * mots);
	while (i < mots)
	{
		chaine[i] = malloc(sizeof(char) * longuest_words(str, charset));
		i++;
	}
	while(i < mots)
	{
		chaine = ft_strcpy(chaine, str, charset);
	
