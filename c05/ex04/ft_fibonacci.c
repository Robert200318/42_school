/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgevorgy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:50:13 by dgevorgy          #+#    #+#             */
/*   Updated: 2022/11/29 11:57:36 by dgevorgy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	g_a = 0;
int	g_b = 1;
int	g_i = 2;

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (g_i <= index)
	{
		g_a += g_b;
		g_b += g_a;
		g_i += 2;
		ft_fibonacci(index);
	}
	if (index % 2 == 0)
		return (g_a);
	else
		return (g_b);
	return (0);
}
/*
int main()
{
	printf("\n%i",ft_fibonacci(5));
}*/
