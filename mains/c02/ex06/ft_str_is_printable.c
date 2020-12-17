/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzheng <hzheng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 13:32:02 by hzheng            #+#    #+#             */
/*   Updated: 2020/12/11 14:04:18 by hzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		while ((str[x] > 31) && (str[x] == 127))
		{
			return(0);
		}
		x++;
	}
	return(1);
}

int main()
{
	int z;

	z = ft_str_is_printable("sadasdx");
	printf("%d\n", z);
}