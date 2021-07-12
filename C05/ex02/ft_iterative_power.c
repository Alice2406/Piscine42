/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 12:19:36 by aniezgod          #+#    #+#             */
/*   Updated: 2021/07/08 13:00:23 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	 nb_power;

	nb_power = 1;
	if (power <= 0)
		return (0);
	while (power > 0)
	{
		nb_power *= nb;
		power--;
	}
	return (nb_power);
}
