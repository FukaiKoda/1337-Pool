/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habdella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:49:01 by habdella          #+#    #+#             */
/*   Updated: 2024/08/03 15:32:27 by habdella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		i;
	int		*p;
	int		size;

	i = 0;
	size = max - min;
	if (min >= max)
		return (NULL);
	p = malloc(4 * size);
	if (!p)
		return (NULL);
	while (min < max)
	{
		p[i++] = min;
		min++;
	}
	return (p);
}
