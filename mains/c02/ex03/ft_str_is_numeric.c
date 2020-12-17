/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzheng <hzheng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 13:02:57 by hzheng            #+#    #+#             */
/*   Updated: 2020/12/14 15:37:29 by hzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		while (str[x] > '9' || str[x] < '0')
		{
			return(0);
		}
		x++;
	}
	return(1);
}

int main(void)
{
	int x;

	x = ft_str_is_numeric("");
	printf("%d\n", x);
}