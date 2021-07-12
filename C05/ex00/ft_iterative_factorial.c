/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 11:38:33 by aniezgod          #+#    #+#             */
/*   Updated: 2021/07/08 11:59:01 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact_nb;

	fact_nb = 1;
	if (nb < 0)
		return (0);
	while (nb != 0)
	{
		fact_nb = fact_nb * nb;
		nb--;
	}
	return (fact_nb);
}
