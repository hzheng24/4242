/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 17:38:58 by psoto-go          #+#    #+#             */
/*   Updated: 2020/12/13 20:57:47 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	strlensignos(char *str)
{
	int		i;
	int		s;
	char	r;

	i = 0;
	s = 0;
	while (str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			s++;
		i++;
	}
	if (s % 2 == 0)
		r = '-';
	else
		r = '+';
	return (r);
}

int		ft_atoi(char *str)
{
	int i;
	int s;
	int num;

	i = 0;
	s = 0;
	num = 0;
	if (str[i] == '\0')
		return (0);
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f'
			|| str[i] == '\r' || str[i] == ' ' ||
			str[i] == '-' || str[i] == '+')
	{
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (int)(str[i] - '0');
		i++;
	}
	if (strlensignos(str) == '-')
		num = -num;
	return (num);
}
