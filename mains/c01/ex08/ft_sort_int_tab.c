/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzheng <hzheng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 16:40:58 by hzheng            #+#    #+#             */
/*   Updated: 2020/12/14 15:19:42 by hzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int c;
	int n1;
	int n2;

	n1 = 0;
	n2 = 1;
	while (n1 < size)
	{
		n2 = n1 + 1;
		while (n2 < size)
		{
			if (tab[n1] > tab[n2])
			{
				c = tab[n1];
				tab [n1] = tab [n2];
				tab [n2] = c;
			}
			n2++;
		}
		n1++;
	}
}

int main()
{
	int tab[5] = {5, 2, 1, 6, 7};
	ft_sort_int_tab(tab, 5);
	printf("{%d, %d, %d, %d, %d}", tab[0], tab [1], tab[2], tab[3], tab[4]);
	return(0);
}