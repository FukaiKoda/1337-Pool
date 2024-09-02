/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opeartion.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habdella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 11:20:08 by habdella          #+#    #+#             */
/*   Updated: 2024/08/12 13:40:49 by habdella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	operation(int a, char op, int b)
{
	if (op == '*')
		return (a * b);
	if (op == '/')
		return (a / b);
	if (op == '+')
		return (a + b);
	if (op == '-')
		return (a - b);
	if (op == '%')
		return (a % b);
	else
		return (-1);
}

void	do_op(char *s1, char *c, char *s2)
{
	int		num1;
	int		num2;

	num1 = ft_atoi(s1);
	num2 = ft_atoi(s2);
	if (c[0] == '/' && num2 == 0)
		write (1, "Stop : division by zero", 23);
	else if (c[0] == '%' && num2 == 0)
		write (1, "Stop : modulo by zero", 21);
	else if (!(c[0] == '+' || c[0] == '-'
			|| c[0] == '/' || c[0] == '%' || c[0] == '*'))
		write(1, "0", 1);
	else
		ft_putnbr(operation(num1, c[0], num2));
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	if (ac == 4)
		do_op(av[1], av[2], av[3]);
	return (0);
}
