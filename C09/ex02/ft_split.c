/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habdella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 15:54:42 by habdella          #+#    #+#             */
/*   Updated: 2024/08/10 12:22:59 by habdella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check(char *charset, char c)
{
	int		i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	ft_sizeof(char *str, char *charset)
{
	int		i;
	int		flag;
	int		size;

	i = 0;
	size = 0;
	while (str[i])
	{
		flag = 0;
		while (str[i] && !check(charset, str[i]))
			i++;
		while (str[i] && check(charset, str[i]))
		{
			if (!flag)
				size++;
			flag = 1;
			i++;
		}
	}
	return (size);
}

int	ft_strlen(char *str, int n, char *charset)
{
	int		len;

	len = 0;
	while (str[n] && check(charset, str[n]))
	{
		len++;
		n++;
	}
	return (len);
}

char	*ft_strdup(char *src, int len)
{
	int		i;
	char	*p;

	i = 0;
	p = (char *)malloc(len + 1);
	if (!p)
		return (NULL);
	while (i < len)
	{
		p[i] = src[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

char	**ft_split(char *str, char *charset)
{
	char	**split;
	int		len;
	int		size;
	int		i;
	int		j;

	i = 0;
	j = 0;
	size = ft_sizeof(str, charset);
	split = (char **)malloc(8 * (size + 1));
	if (!split)
		return (NULL);
	while (str[i])
	{
		while (str[i] && !check(charset, str[i]))
			i++;
		if (str[i])
		{
			len = ft_strlen(str, i, charset);
			split[j++] = ft_strdup(&str[i], len);
			i += len;
		}
	}
	split[j] = NULL;
	return (split);
}
/*
#include <stdio.h>
int main(int ac, char **av)
{
    char **array = ft_split(av[1], av[2]);

    for (int i = 0; array[i] != NULL; i++)
    {
        printf("%s\n", array[i]);
        free(array[i]);
    }
    free(array);
    return 0;
}*/
