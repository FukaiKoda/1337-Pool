/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habdella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 11:38:36 by habdella          #+#    #+#             */
/*   Updated: 2024/07/26 09:32:43 by habdella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		first;
	int		last;
	int		temp;

	first = 0;
	last = size - 1;
	while (first < last)
	{
		temp = tab[first];
		tab[first] = tab[last];
		tab[last] = temp;
		first++;
		last--;
	}
}
