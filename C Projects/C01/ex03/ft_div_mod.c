/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_div_mod.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/07/28 17:59:22 by username         #+#    #+#              */
/*   Updated: 2026/07/28 21:26:04 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int	a = 45;
// 	int	b = 5;
// 	int	v1 = 0;
// 	int	v2 = 0;
// 	int	*div = &v1;
// 	int	*mod = &v2;

// 	printf("Before ft_div_mod: \n");
// 	printf("Pointer 'div' points to adress %p that has the value %d stored\n", div, *div);
// 	printf("Pointer 'mod' points to adress %p that has the value %d stored\n", mod, *mod);
// 	ft_div_mod(a, b, div, mod);
// 	printf("\n");
// 	printf("After ft_div_mod: \n");
// 	printf("Pointer 'div' remains pointing to adress %p, but now that has the value %d stored\n", div, *div);
// 	printf("Pointer 'mod' remains pointing to adress %p, but now that has the value %d stored\n", mod, *mod);
// }
