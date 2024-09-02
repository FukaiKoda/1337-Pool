/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habdella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 22:29:46 by habdella          #+#    #+#             */
/*   Updated: 2024/08/04 12:00:55 by habdella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_seplen(char *sep)
{
	int		i;

	i = 0;
	while (sep[i])
		i++;
	return (i);
}

int	ft_strslen(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		seplen;
	int		total;

	j = 0;
	total = 0;
	seplen = ft_seplen(sep);
	while (j < size)
	{
		i = 0;
		while (strs[j][i])
		{
			total++;
			i++;
		}
		if (j != size - 1)
			total += seplen;
		j++;
	}
	return (total);
}

void	ft_concate(char *p, char **strs, char *sep, int size)
{
	int		i;
	int		j;

	j = 0;
	while (j < size)
	{
		i = 0;
		while (strs[j][i])
			*(p++) = strs[j][i++];
		if (j != size - 1)
		{
			i = 0;
			while (sep[i])
				*(p++) = sep[i++];
		}
		j++;
	}
	*p = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*join;
	char	*p;
	int		len;

	if (size == 0)
	{
		p = malloc(1);
		if (!p)
			return (NULL);
		*p = '\0';
		return (p);
	}
	len = ft_strslen(size, strs, sep);
	p = (char *)malloc(len + 1);
	if (!p)
		return (NULL);
	join = p;
	ft_concate(p, strs, sep, size);
	return (join);
}
