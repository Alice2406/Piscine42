/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 21:11:19 by aniezgod          #+#    #+#             */
/*   Updated: 2021/07/12 23:01:05 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putchar(char c);
void	ft_putstr(char *str);
int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	c;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
		{
			c = s1[i] - s2[i];
			return (c);
		}
	}
	return (0);
}

void	ft_swap(char *a, char *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int diff;

	i = 2;
	while (i < argc - 1)
	{
		j = 2;
		while(j < argc - 1)
		{
			diff = ft_strcmp(argv[i], argv[i + 1]);
			if (diff < 0)
				ft_swap(argv[i], argv[i + 1]);
			j++;
		}
		i++;
	}
	i = 2;
	while (i < argc - 1)
	{
		ft_putstr(argv[i]);
		i++;
	}
}	

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
	}
}


