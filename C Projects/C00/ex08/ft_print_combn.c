/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_print_combn.c                                  :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/07/28 05:22:23 by username         #+#    #+#              */
/*   Updated: 2026/07/28 21:24:34 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	increment_tab(char *tab, int n)
{
	int	i;

	i = n - 1;
	while (i >= 0)
	{
		if (tab[i] < '9' - (n - 1 - i))
		{
			tab[i]++;
			while (i < n - 1)
			{
				tab[i + 1] = tab[i] + 1;
				i++;
			}
			return (1);
		}
		i--;
	}
	return (0);
}

void	ft_print_combn(int n)
{
	char	tab[10];
	int		i;

	if (n > 10 || n <= 0)
		return ;
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
		if (tab[0] != '9' - (n - 1))
			write(1, ", ", 2);
		if (!increment_tab(tab, n))
			break ;
	}
}

// int	main(void)
// {
// 	ft_print_combn(2);
// 	return (0);
// }
