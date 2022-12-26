/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgevorgy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:37:55 by dgevorgy          #+#    #+#             */
/*   Updated: 2022/11/28 18:58:17 by dgevorgy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	f;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	f = 1;
	while (nb > 0)
	{
		f *= nb;
		--nb;
	}
	return (f);
}
/*
int	main()
{
	printf("%i",ft_iterative_factorial(5));
	return (0);
}*/
