/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzheng <hzheng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 18:24:31 by hzheng            #+#    #+#             */
/*   Updated: 2020/12/16 13:52:22 by hzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
	int x;

	x = 0;
	while (s1[x] != '\0' && s1[x] == s2[x])
	{
		x++;
	}
	return (s1[x] - s2[x]);
}

int main(void)
{
	char x[] = "hello";
	char y[] = "helloo";

	printf("%d\n", ft_strcmp( x, y));
	printf("%d\n", strcmp(x, y));
}