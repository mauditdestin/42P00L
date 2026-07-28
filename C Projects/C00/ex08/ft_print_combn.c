/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_print_combn.c                                  :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/07/28 05:22:23 by username         #+#    #+#              */
/*   Updated: 2026/07/28 20:44:56 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	char	tab[10];
	int		i;

	i = 0;
	while (i < n)
	{
		tab[i] = '0' + i;
		i++;
	}
	while (1)
	{
		i = 0;
		while (i < n)
		{
			ft_putchar(tab[i]);
			i++;
		}
	}
}

int	main(void)
{
	ft_print_combn(2);
	return (0);
}
