/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzheng <hzheng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 16:35:52 by hzheng            #+#    #+#             */
/*   Updated: 2020/12/14 18:23:04 by hzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	x = 0;
	while (src[x] != '\0' && x < n)
	{
		dest[x] = src [x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}

int	main()
{
	char dest[] = "hello";
	char src[] = "world";
	unsigned int x;

	x = 1;
	printf("%s\n", ft_strncpy(dest, src, x));
}