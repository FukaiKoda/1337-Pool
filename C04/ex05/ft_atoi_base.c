/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habdella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 11:17:32 by habdella          #+#    #+#             */
/*   Updated: 2024/08/01 13:31:01 by habdella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_base(char *base)
{
	int		i;
	int		j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] == ' ')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

int	convert_number(char index, char *base)
{
	int		j;

	j = 0;
	while (base[j])
	{
		if (index == base[j])
			return (j);
		j++;
	}
	return (-1);
}

int	ft_atoi(char *str, char *base, int blen)
{
	int		num;
	int		sign;

	num = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 15) || *str == 32)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (convert_number(*str, base) != -1)
	{
		num = num * blen + convert_number(*str, base);
		str++;
	}
	return (num * sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int		blen;

	blen = 0;
	while (base[blen])
		blen++;
	if (!check_base(base))
		return (0);
	return (ft_atoi(str, base, blen));
}
