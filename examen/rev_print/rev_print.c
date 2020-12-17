/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzheng <hzheng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 13:40:40 by hzheng            #+#    #+#             */
/*   Updated: 2020/12/11 14:10:43 by hzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	rev_print(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	while (x > 0)
	{
		write(1, &str[x - 1], 1);
		x--;
	}
	return(0);
}

int	main(void)
{
	rev_print("ponies are awesome");
	write(1, "\n", 1);
	rev_print("");
	write(1, "\n", 1);
}