/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravetisy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:51:05 by ravetisy          #+#    #+#             */
/*   Updated: 2022/11/14 15:58:52 by ravetisy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	i[3];

	i[0] = 48;
	while (i[0] <= '7')
	{
		i[1] = i[0] + 1;
		while (i[1] <= '8')
		{
			i[2] = i[1] + 1;
			while (i[2] <= '9')
			{
				write(1, &i[0], 1);
				write(1, &i[1], 1);
				write(1, &i[2], 1);
				if (!(i[0] == '7' && i[1] == '8' && i[2] == '9'))
				{
					write(1, ", ", 2);
				}
				++i[2];
			}
			++i[1];
		}
		++i[0];
	}
}