/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzheng <hzheng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 15:55:58 by hzheng            #+#    #+#             */
/*   Updated: 2020/12/14 16:28:06 by hzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 'A' && str[x] <= 'Z')
		{
			str[x] = str[x] + 32;
		}
		x++;
	}
	x = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	while (str[x] != '\0')
	{
		if (str[x] >= 'a' && str[x] <= 'z')
		{
			if (!((str[x - 1] >= 'a' && str[x - 1] <= 'z')
			|| (str[x - 1] >= 'A' && str[x - 1] <= 'Z')
			|| (str[x - 1] >= '0' && str[x - 1] <= '9')))
			{
				str[x] = str[x] - 32;
			}
		}
		x++;
	}
	return(str);
}

int main()
{
	char x[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(x);
	printf("%s\n", x);
}