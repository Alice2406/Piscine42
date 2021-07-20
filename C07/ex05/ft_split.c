/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 15:17:19 by aniezgod          #+#    #+#             */
/*   Updated: 2021/07/20 16:33:22 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
int	is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	count_words;

	i = 1;
	count_words = 0;
	while (str[i])
	{
		if (is_charset(str[i], charset) && !is_charset(str[i - 1], charset))
			count_words++;
		i++;
	}
	if (!is_charset(str[i - 1], charset))
		count_words++;
	return (count_words);
}

int	len_mot(char *str, char *charset, int i)
{
	int	len;

	len = 0;
	while (str[i])
	{
		if (is_charset(str[i], charset))
			return (len);
		i++;
		len++;
	}
	return (len);
}

char	**ft_split2(char **chaine, int j, char *str, char *charset)
{
	int	i;
	int	r;
	int	len_mot_chaine;

	i = 0;
	while (j < count_words(str, charset))
	{
		len_mot_chaine = len_mot(str, charset, i);
		chaine[j] = malloc(sizeof(char) * len_mot_chaine + 1);
		if (chaine[j] == NULL)
			return (NULL);
		r = 0;
		while (r < len_mot_chaine)
		{
			chaine[j][r] = str[i];
			r++;
			i++;
		}
		chaine[j][r] = '\0';
		while (is_charset(str[i], charset))
			i++;
		j++;
	}
	chaine[j] = 0;
	return (chaine);
}

char	**ft_split(char *str, char *charset)
{
	char	**chaine;
	int		j;

	j = 0;
	if (!str)
		return (NULL);
	chaine = malloc(sizeof(char *) * (count_words(str, charset) + 1));
	chaine = ft_split2(chaine, j, str, charset);
	return (chaine);
}
