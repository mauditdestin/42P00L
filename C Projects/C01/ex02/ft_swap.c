/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_swap.c                                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/07/28 17:57:48 by username         #+#    #+#              */
/*   Updated: 2026/07/28 17:58:51 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// int	main(void)
// {
// 	int	v1 = 15;
// 	int	v2 = 35;
// 	int	*a = &v1;
// 	int	*b = &v2;

// 	printf("Before ft_swap: \n");
// 	printf("Pointer 'a' points to adress %p that has the value %d stored\n", a, *a);
// 	printf("Pointer 'b' points to adress %p that has the value %d stored\n", b, *b);
// 	ft_swap(a, b);
// 	printf("\n");
// 	printf("After ft_swap: \n");
// 	printf("Pointer 'a' remains pointing to adress %p, but now that has the value %d stored\n", a, *a);
// 	printf("Pointer 'b' remains pointing to adress %p, but now that has the value %d stored\n", b, *b);
// }
