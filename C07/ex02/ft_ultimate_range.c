/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habdella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 15:33:36 by habdella          #+#    #+#             */
/*   Updated: 2024/08/06 14:44:57 by habdella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		size;
	int		*p;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = (NULL);
		return (0);
	}
	p = malloc(4 * size);
	if (!p)
	{
		*range = (NULL);
		return (-1);
	}
	while (min <= max)
	{
		p[i++] = min;
		min++;
	}
	*range = p;
	return (size);
}
