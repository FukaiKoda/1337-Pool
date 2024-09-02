/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habdella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 10:41:46 by habdella          #+#    #+#             */
/*   Updated: 2024/07/30 10:23:14 by habdella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

int	check(char c)
{
	if (c >= 'a' && c <= 'z')
		return (0);
	if (c >= 'A' && c <= 'Z')
		return (0);
	if (c >= '0' && c <= '9')
		return (0);
	else
		return (1);
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 1;
	ft_strlowcase(str);
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (!check(str[i]) && check(str[i - 1]))
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}
