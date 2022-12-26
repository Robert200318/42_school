/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgevorgy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:26:59 by dgevorgy          #+#    #+#             */
/*   Updated: 2022/11/29 16:44:21 by dgevorgy         ###   ########.fr       */
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
/*
int main()
{
	printf("%i",ft_is_prime(13));
}*/
