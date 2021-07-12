/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 01:36:47 by aniezgod          #+#    #+#             */
/*   Updated: 2021/07/12 18:40:04 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);

}

int norme_base(char *base)
{
	int i;
	int j;

	i = 0;
	if(ft_strlen(base) == 0 || ft_strlen(base) == 1)
		return (0);
	while(base[i])
	{
		j = i + 1;
		if(base[i] == ' ' || base[i] == '+' || base[i] == '-' || base[i] < 32 || base[i] > 127)
			return (0);
		while(base[j])
		{
			if(base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int nbr_long;
	int size;

	nbr_long = nbr;
	size = ft_strlen(base);
	if (norme_base(base))
	{
		if (nbr_long < 0)
		{
			ft_putchar('-');
			nbr_long *= (-1);
		}
		if(nbr_long > size)
		{
			ft_putnbr_base(nbr_long / size, base);
			ft_putnbr_base(nbr_long % size, base);
		}
		else
			ft_putchar(base[nbr_long]);
	}
	
}


#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);

int		main(void)
{
	write(1, "42:", 3);
	ft_putnbr_base(42, "0123456789");
	write(1, "\n2a:", 4);
	ft_putnbr_base(42, "0123456789a bcdef");
	write(1, "\n-2a:", 5);
	ft_putnbr_base(-42, "0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "0");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "+-0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "\t0123456789abcdef");
}
