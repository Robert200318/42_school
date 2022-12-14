/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravetisy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 18:59:41 by ravetisy          #+#    #+#             */
/*   Updated: 2022/12/01 18:59:48 by ravetisy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i])
	{
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
		{
			++c;
		}
		++i;
	}
	if (c == i)
		return (1);
	else
		return (0);
}
