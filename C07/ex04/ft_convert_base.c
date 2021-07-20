/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 17:14:20 by aniezgod          #+#    #+#             */
/*   Updated: 2021/07/20 21:13:20 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int		norme_base(char *base);
long	ft_atoi_base(char *str, char *base);
int		ft_strlen(char *str);
char	*ft_putnbr_base(long nbr, char *base);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	nb;
	char	*str;

	if (norme_base(base_from) && norme_base(base_to))
	{
		nb = ft_atoi_base(nbr, base_from);
		str = ft_putnbr_base(nb, base_to);
	}
	else
		return (NULL);
	return (str);
}

int	ft_nb_len(long	nb, int size)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		nb = -nb;
		i++;
	}
	while (nb > 0)
	{
		nb /= size;
		i++;
	}
	return (i);
}

char	*ft_putnbr_base(long nbr, char *base)
{
	long	nbr_long;
	int		size;
	int		i;
	char	*str_base;
	int		offset;

	offset = 0;
	nbr_long = nbr;
	size = ft_strlen(base);
	i = ft_nb_len(nbr_long, size) - 1;
	str_base = malloc(sizeof(char) * (i + 1));
	if (nbr < 0)
	{
		str_base[0] = '-';
		offset = 1;
		nbr_long = -nbr_long;
	}
	str_base[i + 1] = '\0';
	while (i >= offset)
	{
		str_base[i] = base[nbr_long % size];
		nbr_long /= size;
		i--;
	}
	return (str_base);
}
