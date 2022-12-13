/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravetisy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 19:05:38 by ravetisy          #+#    #+#             */
/*   Updated: 2022/12/01 19:05:41 by ravetisy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		if (i > 0)
		{
			if ((str[i - 1] < 65 || str[i - 1] > 90)
				&& (str[i - 1] < 97 || str[i - 1] > 122))
			{
				if (str[i - 1] < 48 || str[i - 1] > 57)
				{
					if (str[i] >= 97 && str[i] <= 122)
						str[i] = str[i] - 32;
				}
			}
		}
		else
			str[i] = str[i] - 32;
		++i;
	}
	return (str);
}
