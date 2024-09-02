/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habdella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 08:06:02 by habdella          #+#    #+#             */
/*   Updated: 2024/07/24 20:03:40 by habdella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchars(char x, char y, char z)
{
	write(1, &x, 1);
	write(1, &y, 1);
	write(1, &z, 1);
}

void	ft_print_comb(void)
{
	int		i;
	int		j;
	int		k;

	i = 48;
	while (i <= 55)
	{
		j = i + 1;
		while (j <= 56)
		{
			k = j + 1;
			while (k <= 57)
			{
				ft_putchars(i, j, k);
				if (i != 55)
					write(1, ", ", 2);
				k++;
			}
			j++;
		}
		i++;
	}
}
