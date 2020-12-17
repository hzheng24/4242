/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_data_input_error.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 17:55:12 by egomez-a          #+#    #+#             */
/*   Updated: 2020/12/13 20:58:01 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_data_input_error(int argc, char *str)
{
	int i;
	
	if (argc != 2)
	{
		write(1, "Error", 5);
		write(1, "\n", 1);
		write(1, "Too many arguments", 19);
		write(1, "\n", 1);
	}
	i =0;
	while(str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			write(1, "Error\n", 6);
			return ;
		}
		i++;
	}
	return ; 
}

int		main(int argc, char **argv)

{
	ft_data_input_error(argc, argv[1]);
}
