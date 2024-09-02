/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habdella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 10:39:26 by habdella          #+#    #+#             */
/*   Updated: 2024/08/08 15:02:34 by habdella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H

# include <unistd.h>
# define FT_BOOLEAN_H

typedef int	t_bool;

# define TRUE 1
# define FALSE 0
# define SUCCESS 0
# define EVEN(X) (((X) % 2) == 0)
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"

#endif
