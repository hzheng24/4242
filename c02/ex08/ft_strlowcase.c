/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzheng <hzheng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 15:37:48 by hzheng            #+#    #+#             */
/*   Updated: 2020/12/15 17:41:31 by hzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
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
	return (str);
}
