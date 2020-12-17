/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzheng <hzheng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 15:37:48 by hzheng            #+#    #+#             */
/*   Updated: 2020/12/13 15:42:40 by hzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_srtlowcase(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 'A' || str[x] <= 'Z')
		{
			str[x] = str[x] + 32;
		}
		x++;
	}
	return(str);
}

int	main(void)
{
	char c[] = "HOLA";

	ft_srtlowcase(c);
	printf("%s\n", c);
}