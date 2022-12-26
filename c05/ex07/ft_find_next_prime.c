/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgevorgy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:41:40 by dgevorgy          #+#    #+#             */
/*   Updated: 2022/11/29 17:50:52 by dgevorgy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb > 1)
	{
		while (i <= nb)
		{
			if ((i == nb) && (nb % i == 0))
				return (1);
			else if (nb % i == 0)
				return (0);
			++i;
		}
	}
	return (0);
}

int	ft_find_next_prime(int nb)
{
	while (1)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		++nb;
	}
}
/*
int main()
{
	printf("%i",ft_find_next_prime(8));
}*/
