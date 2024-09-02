/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habdella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 08:46:27 by habdella          #+#    #+#             */
/*   Updated: 2024/08/06 12:34:51 by habdella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

char	**sort_params(int size, char **str)
{
	int		i;
	int		j;
	char	*swp;

	i = 1;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp(str[i], str[j]) > 0)
			{
				swp = str[i];
				str[i] = str[j];
				str[j] = swp;
			}
			j++;
		}
		i++;
	}
	return (str);
}

int	main(int ac, char **av)
{
	int		i;
	int		j;

	j = 1;
	sort_params(ac, av);
	while (av[j])
	{
		i = 0;
		while (av[j][i])
		{
			write(1, &av[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
}
