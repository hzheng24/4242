/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzheng <hzheng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 13:24:32 by hzheng            #+#    #+#             */
/*   Updated: 2020/12/11 13:30:44 by hzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		while (str[x] < 'a' || str[x] > 'z')
		{
			return(0);
		}
		x++;
	}
	return(1);
}

int	main(void)
{
	int z;

	z = ft_str_is_lowercase("");
	printf("%d\n", z);
}