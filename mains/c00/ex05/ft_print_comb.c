/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzheng <hzheng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 15:53:18 by hzheng            #+#    #+#             */
/*   Updated: 2020/12/08 18:11:22 by hzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_num(int x, int y, int z)
{
	ft_putchar(x + 48);
	ft_putchar(y + 48);
	ft_putchar(z + 48);
}

void	ft_print_comb(void)
{
	int x;
	int y;
	int z;

	x = 0;
	while (x <= 7)
	{
		y = x + 1;
		while (y <= 8)
		{
			z = y + 1;
			while (z <= 9)
			{
				ft_num(x, y, z);
				if (!(x == 7 && y == 8 && z == 9))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				z++;
			}
			y++;
		}
		x++;
	}
}

int main(void)
{
	ft_print_comb();
}