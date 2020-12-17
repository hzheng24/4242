/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzheng <hzheng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 13:22:52 by hzheng            #+#    #+#             */
/*   Updated: 2020/12/16 17:10:16 by hzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int x;
	int y;

	x = 0;
	if (to_find[x] == '\0')
		return (&str[x]);
	while (str[x] != '\0')
	{
		y = 0;
		while ((to_find[y] && str[x + y] == to_find[y]))
		{
			if (to_find[y + 1] == '\0')
				return (&str[x]);
			y++;
		}
		x++;
	}
	return (0);
}
