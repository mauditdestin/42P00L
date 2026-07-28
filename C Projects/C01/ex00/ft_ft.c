/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_ft.c                                           :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/07/28 17:52:36 by username         #+#    #+#              */
/*   Updated: 2026/07/28 17:55:36 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

// int	main(void)
// {
// 	int	n = 1;
// 	int	*nbr = &n;

// 	printf("Before ft_ft: \n");
// 	printf("Variable 'nbr' points to adress %p that has the value %d stored\n", &n, n);
// 	printf("Pointer 'nbr' points to the same adress %p that has the value %d stored\n", nbr, *nbr);
// 	ft_ft(nbr);
// 	printf("\n");
// 	printf("After ft_ft: \n");
// 	printf("Pointer 'nbr' remains pointing to adress %p, but now that has the value %d stored\n", nbr, *nbr);
// 	printf("Now 'n' has the value %d stored\n", n);
// }
