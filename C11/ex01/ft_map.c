/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habdella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 12:32:22 by habdella          #+#    #+#             */
/*   Updated: 2024/08/12 16:38:43 by habdella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int		i;
	int		*p;

	i = 0;
	p = malloc(length * 4);
	if (!p)
		return (NULL);
	while (i < length)
	{
		p[i] = f(tab[i]);
		i++;
	}
	return (p);
}
