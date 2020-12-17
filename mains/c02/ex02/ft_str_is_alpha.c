/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzheng <hzheng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 12:49:52 by hzheng            #+#    #+#             */
/*   Updated: 2020/12/11 14:37:31 by hzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int x;
	
	x = 0;
	while (str[x] != '\0')
	{
		while ((str[x] > 'z' || str[x] < 'a') && (str[x] > 'Z' || str[x] < 'A'))
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

	z = ft_str_is_alpha("");
	printf("%d\n", z);
}