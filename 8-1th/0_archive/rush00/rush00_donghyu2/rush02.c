/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyu2 <donghyu2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 19:01:14 by donghyu2          #+#    #+#             */
/*   Updated: 2022/08/27 22:04:59 by donghyu2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	first_last(int x, int checker);
void	middle(int x);

void	rush02(int x, int y)
{
	int	temp_y;

	temp_y = y;
	while (y > 0)
	{
		if (y == temp_y)
			first_last(x, 0);
		else if (y == 1)
			first_last(x, 1);
		else
			middle(x);
		ft_putchar('\n');
		y--;
	}
}

void	first_last(int x, int checker)
{
	int temp_x;

	temp_x = x;
	while (x > 0)
	{
		if (x == temp_x || x == 1)
		{
			if (checker == 0)
				ft_putchar('A');
			else
				ft_putchar('C');
		}
		else
		ft_putchar('B');
		x--;
	}
}

void	middle(int x)
{
	ft_putchar('B');
	while (--x > 0)
	{
		if (x == 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}
