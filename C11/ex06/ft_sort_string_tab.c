/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habdella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 17:14:25 by habdella          #+#    #+#             */
/*   Updated: 2024/08/12 10:21:28 by habdella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char **str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		j;
	int		k;
	char	*temp;

	i = 0;
	j = ft_strlen(tab);
	while (i < j - 1)
	{
		k = i + 1;
		while (k < j)
		{
			if (ft_strcmp(tab[i], tab[k]) > 0)
			{
				temp = tab[i];
				tab[i] = tab[k];
				tab[k] = temp;
			}
			k++;
		}
		i++;
	}
}
