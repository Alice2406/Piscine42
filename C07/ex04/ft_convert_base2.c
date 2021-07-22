/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 21:14:22 by aniezgod          #+#    #+#             */
/*   Updated: 2021/07/22 12:39:59 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	norme_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) == 0 || ft_strlen(base) == 1)
		return (0);
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-' || base[i] < 32 || base[i] > 127)
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_get_index_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (c != base[i] && base[i] != '\0')
	{
		i++;
	}
	if (base[i] == '\0')
		return (-1);
	return (i);
}

long	ft_avance(char *str, char *base, int i, int size_base)
{
	int		j;
	long	number;

	j = 0;
	number = 0;
	while (ft_get_index_in_base(str[i], base) != -1)
	{
		j = ft_get_index_in_base(str[i], base);
		number = number * size_base + j;
		i++;
	}
	return (number);
}

long	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		compteur;
	int		size_base;
	long	number;

	i = 0;
	compteur = 1;
	size_base = ft_strlen(base);
	if (norme_base(base) == 0)
		return (0);
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\n' || str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			compteur *= (-1);
		i++;
	}
	number = ft_avance(str, base, i, size_base);
	return (number * compteur);
}
