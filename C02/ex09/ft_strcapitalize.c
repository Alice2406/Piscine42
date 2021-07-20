/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aniezgod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 19:46:20 by aniezgod          #+#    #+#             */
/*   Updated: 2021/07/04 10:37:43 by aniezgod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_c_is_alpha_or_numeric(char c)
{
	if (c < '0' || (c > '9' && c < 'A') || c > 'z' || (c > 'Z' && c < 'a'))
		return (0);
	return (1);
}

int	ft_c_is_lowercase(char c)
{
	if (c < 'a' || c > 'z')
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{	
	int	i;
	int	boolean;

	boolean = 1;
	i = 0;
	while (str[i])
	{
		if (!ft_c_is_alpha_or_numeric(str[i]))
			boolean = 1;
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
			if (ft_c_is_lowercase(str[i]) && boolean)
				str[i] = str[i] - 32;
			boolean = 0;
		}
		i++;
	}
	return (str);
}
