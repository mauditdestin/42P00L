/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   rush03.c                                          :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/07/28 05:09:23 by username         #+#    #+#              */
/*   Updated: 2026/07/28 05:09:23 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_error(void);

void	draw_line(int longueur, char left, char middle, char right)
{
	int	i;

	i = 0;
	ft_putchar(left);
	while (i < longueur - 2)
	{
		ft_putchar(middle);
		i++;
	}
	if (longueur > 1)
		ft_putchar(right);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	if (x <= 0 || y <= 0)
	{
		ft_error();
		return ;
	}
	draw_line(x, 'A', 'B', 'C');
	i = 2;
	while (i < y)
	{
		draw_line(x, 'B', ' ', 'B');
		i++;
	}
	if (y > 1)
		draw_line(x, 'A', 'B', 'C');
}
