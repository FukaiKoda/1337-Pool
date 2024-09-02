/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habdella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 09:23:32 by habdella          #+#    #+#             */
/*   Updated: 2024/08/01 12:39:21 by habdella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_base(char *base)
{
	int		i;
	int		j;

	i = 0;
	if (base[i] == '\0' || base[i + 1] == '\0')
		return (0);
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_putnbr(int nb, char *base, int len)
{
	long	nbl;

	nbl = nb;
	if (nbl < 0)
	{
		nbl *= -1;
		write(1, "-", 1);
	}
	if (nbl >= len)
		ft_putnbr(nbl / len, base, len);
	write(1, &base[nbl % len], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		check;
	int		len;

	len = 0;
	check = check_base(base);
	if (!check)
		return ;
	while (base[len])
		len++;
	ft_putnbr(nbr, base, len);
}
