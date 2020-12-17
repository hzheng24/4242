/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzheng <hzheng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 13:24:32 by hzheng            #+#    #+#             */
/*   Updated: 2020/12/14 18:31:50 by hzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		while (str[x] < 'a' || str[x] > 'z')
		{
			return (0);
		}
		x++;
	}
	return (1);
}
