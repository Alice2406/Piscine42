/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 21:14:05 by aniezgod          #+#    #+#             */
/*   Updated: 2021/07/22 12:41:04 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int		norme_base(char *base);
long	ft_atoi_base(char *str, char *base);
int		ft_strlen(char *str);
char	*ft_putnbr_base(long nbr, char *base);
int		ft_get_index_in_base(char c, char *base);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	nb;
	char	*str;
	int		i;

	i = 0;
	while (nbr[i])
	{
		while (nbr[i] == ' ' || nbr[i] == '-' || nbr[i] == '+')
			i++;
		if (ft_get_index_in_base(nbr[i], base_from) == -1)
			return (NULL);
		i++;
	}
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
	if (nb == 0)
		return (1);
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
	int		size;
	int		i;
	char	*str_base;
	int		offset;

	offset = 0;
	size = ft_strlen(base);
	i = ft_nb_len(nbr, size) - 1;
	str_base = malloc(sizeof(char) * (i + 1));
	if (str_base == NULL)
		return (NULL);
	if (nbr < 0)
	{
		str_base[0] = '-';
		offset = 1;
		nbr = -nbr;
	}
	str_base[i + 1] = '\0';
	while (i >= offset)
	{
		str_base[i] = base[nbr % size];
		nbr /= size;
		i--;
	}
	return (str_base);
}
