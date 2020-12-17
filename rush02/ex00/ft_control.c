/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_control.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 20:45:10 by psoto-go          #+#    #+#             */
/*   Updated: 2020/12/13 21:07:55 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putcharerror(void)
{
	write(1, "Error\n", 6);
}
int		ft_error(char *str)
{
	int i;
	int	aa;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			ft_putcharerror();
			return (0);		
		}
		i++;
		if (i > 10)
		{
			ft_putcharerror();
			return (0);
		}
	}
	aa = 0;
	while (*str && *str >= '0' && *str <= '9')
	{
		aa = (aa * 10) + ((int)str - '0');
		str++;
	}
	if (!(aa <= 2147483647))
	{
		ft_putcharerror();
		return (-1);
	}
	return ((unsigned int) aa);
}
