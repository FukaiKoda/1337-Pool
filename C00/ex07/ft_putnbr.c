/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habdella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 09:33:32 by habdella          #+#    #+#             */
/*   Updated: 2024/07/24 10:14:11 by habdella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	nbl;
	int		i;
	char	nbrs[11];

	nbl = nb;
	i = 0;
	if (nbl == 0)
	{
		write(1, "0", 1);
		return ;
	}
	else if (nbl < 0)
	{
		nbl *= -1;
		write(1, "-", 1);
	}
	while (nbl > 0)
	{
		nbrs[i++] = (nbl % 10) + 48;
		nbl = nbl / 10;
	}
	while (--i >= 0)
		write(1, &nbrs[i], 1);
}
