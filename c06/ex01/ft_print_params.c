/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravetisy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:27:08 by ravetisy          #+#    #+#             */
/*   Updated: 2022/12/01 15:39:24 by ravetisy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (argc > i)
	{
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			++j;
		}
		j = 0;
		++i;
		write(1, "\n", 1);
	}
}
