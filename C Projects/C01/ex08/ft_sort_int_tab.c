/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_sort_int_tab.c                                 :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/07/28 21:34:04 by username         #+#    #+#              */
/*   Updated: 2026/07/28 23:03:01 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = 0;
	temp = 0;
	while (i < size)
	{
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j + 1];
				tab[j + 1] = tab[j];
				tab[j] = temp;
				j = 0;
			}
			else
				j++;
		}
		i++;
	}
}

// int	main(void)
// {
// 	int	tab[10] =
// 	{
// 		1, 5, 3, 4, 2, 6, 7, 8, 9, 0
// 	};
// 	int	i = 0;

// 	ft_sort_int_tab(tab, 10);
// 	while (i < 10)
// 	{
// 		printf("%d\n", tab[i]);
// 		i++;
// 	}
// 	return (0);
// }
