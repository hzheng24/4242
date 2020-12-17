/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzheng <hzheng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 19:15:59 by hzheng            #+#    #+#             */
/*   Updated: 2020/12/14 14:19:51 by hzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	write(1, &x, 1);
	return (x);
}

int	main(void)
{
    int n;

    n = ft_strlen("hola");
    printf("%d\n", n);
}