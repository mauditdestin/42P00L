/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_print_numbers.c                                :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/07/28 05:16:33 by username         #+#    #+#              */
/*   Updated: 2026/07/28 05:17:08 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	numb;

	numb = '0';
	while (numb <= '9')
	{
		write(1, &numb, 1);
		numb++;
	}
}

// int main()
// {
//     ft_print_numbers();
//     return 0;
// }
