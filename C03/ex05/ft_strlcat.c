/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habdella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 20:19:23 by habdella          #+#    #+#             */
/*   Updated: 2024/07/30 16:35:38 by habdella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dl;
	unsigned int	sl;
	unsigned int	i;

	i = 0;
	dl = 0;
	sl = 0;
	while (dest[dl] && dl < size)
		dl++;
	while (src[sl])
		sl++;
	if (size == dl)
		return (dl + sl);
	if (dl < size - 1)
	{
		while (src[i] && (dl + i) < size - 1)
		{
			dest[dl + i] = src[i];
			i++;
		}
	}
	dest[dl + i] = '\0';
	return (dl + sl);
}
