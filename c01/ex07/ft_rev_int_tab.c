/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravetisy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:12:41 by ravetisy          #+#    #+#             */
/*   Updated: 2022/11/23 16:36:18 by ravetisy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	max;
	int	count;
	int	ssize;

	max = 0;
	count = 0;
	ssize = size;
	while (count < size / 2)
	{
		max = tab[ssize];
		tab[ssize] = tab[count];
		tab[count] = max;
		++count;
		--ssize;
	}
}
