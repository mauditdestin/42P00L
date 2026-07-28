/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_is_negative.c                                  :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/07/28 05:16:35 by username         #+#    #+#              */
/*   Updated: 2026/07/28 05:17:28 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	positive;
	char	negative;

	positive = 'P';
	negative = 'N';
	if (n < 0)
		write(1, &negative, 1);
	else
		write(1, &positive, 1);
}

// int main() {
//     ft_is_negative(1);
//     ft_is_negative(-1);
//     ft_is_negative(12);
//     ft_is_negative(-2);
// }
