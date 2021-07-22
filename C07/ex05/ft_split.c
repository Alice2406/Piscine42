/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 15:17:19 by aniezgod          #+#    #+#             */
/*   Updated: 2021/07/22 12:46:20 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
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
	int	f;

	f = 1;
	i = 0;
	count_words = 0;
	if (str[0] == '\0')
		return (count_words);
	while (str[i])
	{
		if (is_charset(str[i], charset))
			f = 1;
		if (f == 1 && !is_charset(str[i], charset))
		{
			f = 0;
			count_words++;
		}
		i++;
	}
	return (count_words);
}

int	len_mot(char *str, char *charset, int i)
{
	int	len;

	len = 0;
	while (str[i] && is_charset(str[i], charset))
		i++;
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
		while (is_charset(str[i], charset))
			i++;
		r = 0;
		while (r < len_mot_chaine)
		{
			chaine[j][r] = str[i];
			r++;
			i++;
		}
		chaine[j][r] = '\0';
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
	if (count_words(str, charset) != 0 || *str)
	{
		chaine = malloc(sizeof(char *) * (count_words(str, charset) + 1));
		chaine = ft_split2(chaine, j, str, charset);
		return (chaine);
	}
	else
	{
		chaine = malloc(sizeof(char *) * 1);
		chaine[0] = 0;
		return (chaine);
	}
}
