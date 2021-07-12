/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab_arg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 17:55:09 by aniezgod          #+#    #+#             */
/*   Updated: 2021/07/12 14:33:24 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int		ft_strlen(char *str);
void	ft_error(void);

int	*ft_tab_arg(char *str, int *tab)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			tab[j] = str[i] - 48;
			i++;
			j++;
		}
		else
			i++;
	}
	if (j != 16)
	{
		ft_error();
		return (0);
	}
	return (tab);
}

int	verifier_arg(int *tab) //verifie que l'argument contient au moins un 1
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 16)
	{
		if (tab[i] == 1)
			j++;
		i++;
	}
	if (j == 0)
		return (1);
	else
		return (0);
}
