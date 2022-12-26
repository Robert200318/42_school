/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgevorgy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:20:27 by dgevorgy          #+#    #+#             */
/*   Updated: 2022/11/30 16:28:30 by dgevorgy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power > 0)
		return (nb * ft_recursive_power(nb, power - 1));
	else if (power < 0)
		return (0);
	return (1);
}
/*
int main()
{
	printf("%i",ft_recursive_power(5, 2));
	return (0);
}*/
