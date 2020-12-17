/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzheng <hzheng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 13:31:26 by hzheng            #+#    #+#             */
/*   Updated: 2020/12/11 13:31:36 by hzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		while (str[x] < 'A' || str[x] > 'Z')
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