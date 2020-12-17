/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzheng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 14:39:58 by hzheng            #+#    #+#             */
/*   Updated: 2020/12/11 15:06:12 by hzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rotone(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		if ((str[x] < 'z' && str[x] > 'a') || (str[x] < 'Z' && str[x] > 'A'))
		{
			if (str[x] == 'z' || str[x] == 'Z')
			{
				str[x] = str[x] - 25;
			}
			else
			{
				str[x]++;
			}
		}
		write(1, &str[x], 1);
		x++;
	}
	write(1, "\n", 1);
}

int main(int ac, char *av[])
{
	if (ac > 2)
	{
		rotone(av[1]);
		return(0);
	}
}
