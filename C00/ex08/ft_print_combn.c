/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printcombn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habdella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 10:24:25 by habdella          #+#    #+#             */
/*   Updated: 2024/08/13 12:37:03 by habdella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_comb(char start[], int n)
{
	int		i;

	i = 0;
	while (i < n)
	{
		write(1, &start[i], 1);
		i++;
	}
	if (start[0] != (10 - n) + '0')
		write(1, ", ", 2);
}

void	fill_array(char start[], char end[], int n)
{
	int		i;
	int		j;

	while (1)
	{
		print_comb(start, n);
		i = n - 1;
		while (i >= 0 && start[i] == end[i])
			i--;
		if (i < 0)
			break ;
		start[i]++;
		j = i + 1;
		while (j < n)
		{
			start[j] = start[j - 1] + 1;
			j++;
		}
	}
}

void	ft_print_combn(int n)
{
	char	start[9];
	char	end[9];
	int		i;

	i = 0;
	if (!(n > 0 && n < 10))
		return ;
	while (i < n)
	{
		start[i] = i + '0';
		end[i] = (10 - n + i) + '0';
		i++;
	}
	fill_array(start, end, n);
	write(1, "\n", 1);
}
