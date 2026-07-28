/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   main.c                                            :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/07/28 05:09:18 by username         #+#    #+#              */
/*   Updated: 2026/07/28 05:09:18 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);
void	ft_putchar(char c);

int	main(void)
{
	rush(5, 3);
	ft_putchar('\n');
	rush(5, 1);
	ft_putchar('\n');
	rush(1, 1);
	ft_putchar('\n');
	rush(1, 5);
	ft_putchar('\n');
	rush(4, 4);
	ft_putchar('\n');
	rush(0, 4);
	ft_putchar('\n');
	rush(-4, -4);
	ft_putchar('\n');
}
