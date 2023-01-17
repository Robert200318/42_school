/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravetisy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:46:32 by ravetisy          #+#    #+#             */
/*   Updated: 2022/12/01 18:32:13 by ravetisy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_svap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	c;
	int	s;
	int	sd;
	int k;

	i = 1;
	j = 0;
	while (argv[i])
	{
		j = i + 1;
		while (argv[j])
		{
			c = 0;
			k = 0;
			while (argv[i][c] != '\0' && argv[j][c] != '\0' && k == 0)
			{
				if (argv[i][c] > argv[j][c])
				{
					ft_svap(&argv[i], &argv[j]);
					k = 2;
				}		
				++c;
			}
			++j;
		}
		++i;
	}

	s = 1;
	sd = 0;
	while (argc > s)
	{
		while (argv[s][sd] != '\0')
		{
			write(1, &argv[s][sd], 1);
			++sd;
		}
		sd = 0;
		++s;
		write(1, "\n", 1);
	}
}

