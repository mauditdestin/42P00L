/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_putnbr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/07/28 05:22:16 by username         #+#    #+#              */
/*   Updated: 2026/07/28 20:51:16 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	n;

	n = nb;
	if (n == -2147483648)
		write(1, "-2147483648", 11);
	else if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n >= 0 && n <= 9)
		ft_putchar(n + '0');
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

// int	main(void)
// {
// 	ft_putnbr(-2147483648);
// 	write(1, "\n", 1);
// 	ft_putnbr(-214);
// 	write(1, "\n", 1);
// 	ft_putnbr(123);
// 	write(1, "\n", 1);
// 	ft_putnbr(0);
// 	write(1, "\n", 1);
// }
